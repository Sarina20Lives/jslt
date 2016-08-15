%{
#include <math.h>
#include <stdio.h>
#include <stdlib.h>	
#include "lexico_jslt.h"
#include "nodojslt.h"
#include <QString>
extern int jsltlex(void);
extern char * jslttext;
extern int jsltline;
void jslterror(char * s);
QString salida;

struct Atributos{
	NodoJslt *nodo = new NodoJslt();
};

%}

%union{
	char cadena[1000];
	struct Atributos * atri;
}

/* Declaraciones de Bison * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/* Tokens: */

// Html:
%token <cadena> OPEN_HTML CLOSE_HTML OPEN_BODY CLOSE_BODY OPEN_HEAD OPEN_TITLE CLOSE_TITLE CLOSE_HEAD
%token <cadena> OPEN_H1 CLOSE_H1 OPEN_H2 CLOSE_H2 OPEN_H3 CLOSE_H3 OPEN_H4 CLOSE_H4 OPEN_H5 CLOSE_H5 OPEN_H6 CLOSE_H6
%token <cadena> OPEN_TABLE CLOSE_TABLE OPEN_TR CLOSE_TR OPEN_TH CLOSE_TH OPEN_TD CLOSE_TD OPEN_P CLOSE_P OPEN_B CLOSE_B OPEN_I CLOSE_I

// Atributes:
%token <cadena> PR_BORDER PR_BGCOLOR PR_WIDTH PR_HEIGHT

//jsl:
%token TAG_TRANSFORMER TAG_FINAL OPEN_PLANTILLA CLOSE_PLANTILLA TAG_END TAG_VARIABLE TAG_ASIGNAR TAG_APLICAR TAG_VALOR
%token OPEN_FOREACH CLOSE_FOREACH OPEN_IF CLOSE_IF  OPEN_SWITCH CLOSE_SWITCH OPEN_CASE CLOSE_CASE OPEN_DEFAULT CLOSE_DEFAULT 

// Atributos jsl:
%token <cadena> PR_SELECTED PR_CONDITION PR_NAME_OBJ PR_RUTA PR_VERSION PR_VALUE PR_VAR 

// Referencias:
%token <cadena> REFALL REF
%token <cadena> SYM_ACTUAL SYM_RAIZ SYM_PADRE

// Tipos: 
%token <cadena> TYPE_ENTERO TYPE_CADENA  TYPE_BOOLEAN  TYPE_DOUBLE  TYPE_CARACTER

// Simbolos: 
%token <cadena> EQUAL ASIGN NO_EQUAL LESS_EQUAL LESS HIGHER HIGHER_EQUAL NOTHING OR AND NAND NOR XOR NOT SUM SUB MUL DIV MOD POW INC DEC
%token <cadena> OPEN_PAR CLOSE_PAR OPEN_COR CLOSE_COR SYM_END 

// Valores:
%token <cadena> EVERYTHING CARACTER FLOTANTE ENTERO CADENA ID TRUE FALSE

/* No terminales: */
%type <cadena> type
%type <cadena> atribute 
%type <cadena> atributes 
%type <cadena> allTokens
%type <cadena> variety

%type <atri> jslt 
%type <atri> transformer
%type <atri> templates 
%type <atri> template 
%type <atri> nameTemplate 
%type <atri> refList 
%type <atri> elements 
%type <atri> element 
%type <atri> html 
%type <atri> contents 
%type <atri> declare 
%type <atri> asigment 
%type <atri> aplicate 
%type <atri> getValue 
%type <atri> forEach
%type <atri> if 
%type <atri> switch 
%type <atri> cases 
%type <atri> case 
%type <atri> other 
%type <atri> references 
%type <atri> reference 
%type <atri> expresion 
%type <atri> logical 
%type <atri> relational 
%type <atri> arithmetic 
%type <atri> unitary 
%type <atri> value

/* Asociatividad y/o precedencia */
%left OR NOR XOR
%left AND NAND
%precedence NOT
%left SUM SUB
%left MUL DIV MOD
%left POW

%%

/* Declaraciones de Gramática * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

 jslt : transformer 
 		{
 			$<atri>$ = new Atributos();
			$<atri>$ = $<atri>1;
			fprintf(stderr, "%s", $<atri->nodo>$->getDOT().toUtf8().data());
 		}
 ;

 transformer :  TAG_TRANSFORMER PR_RUTA ASIGN CADENA PR_VERSION ASIGN CADENA SYM_END templates TAG_FINAL
			 	{
			 		$<atri>$ = new Atributos();
			 		$<atri->nodo>$ = new NodoJslt(0, "transformacion");
			 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>4));
			 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>7));
					$<atri->nodo>$->addNodo(* $<atri->nodo>9);  		
			 	}
 ;

 templates :	template templates 
			 	{
			 		$<atri>$ = new Atributos();
			 		$<atri>$ = $<atri>2;
			 		$<atri->nodo>$->prepNodo(* $<atri->nodo>1);
			 	}
			 	| declare templates 
			 	{
			 		$<atri>$ = new Atributos();
			 		$<atri>$ = $<atri>2;
			 		$<atri->nodo>$->prepNodo(* $<atri->nodo>1);
			 	}
			 	| %empty
			 	{
			 		$<atri>$ = new Atributos();
			 		$<atri->nodo>$ = new NodoJslt(0, "plantillas");
			 	} 
 ;

 template : OPEN_PLANTILLA PR_NAME_OBJ ASIGN nameTemplate SYM_END  elements CLOSE_PLANTILLA
 			{
		 		$<atri>$ = new Atributos();
			 	$<atri->nodo>$ = new NodoJslt(0, "plantilla");
			 	$<atri->nodo>$->addNodo(* $<atri->nodo>4);
			 	$<atri->nodo>$->addNodo(* $<atri->nodo>6);
 			}
 ;

 nameTemplate : refList 
 				{
			 		$<atri>$ = new Atributos();
			 		$<atri>$ = $<atri>1;
 				}
 				| SYM_RAIZ	
 				{
			 		$<atri>$ = new Atributos();
			 		$<atri->nodo>$ = new NodoJslt(0, $<cadena>1);	
 				}
 ;

 refList : 	refList REF 
 			{
		 		$<atri>$ = new Atributos();
		 		$<atri>$ = $<atri>1;
		 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>1));	
 			}
 		 	| REF 
 		 	{
		 		$<atri>$ = new Atributos();
		 		$<atri->nodo>$ = new NodoJslt(0, "referencia");
		 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>1));
 		 	}
 ;

 elements : element elements 
 			{
		 		$<atri>$ = new Atributos();
		 		$<atri>$ = $<atri>1;
		 		$<atri->nodo>$->prepNodo(* $<atri->nodo>1);
 			}
		 	| %empty 
		 	{
		 		$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, "elementos");		 		
		 	}
 ;

 element : 	declare 
			{ 
 		 		$<atri>$ = new Atributos();
 		 		$<atri>$ = $<atri>1;
			}
 			| asigment
			{ 
 		 		$<atri>$ = new Atributos();
 		 		$<atri>$ = $<atri>1;
			}
 			| aplicate
			{ 
 		 		$<atri>$ = new Atributos();
 		 		$<atri>$ = $<atri>1;
			}
 			| getValue
			{ 
 		 		$<atri>$ = new Atributos();
 		 		$<atri>$ = $<atri>1;
			}
 			| forEach
			{ 
 		 		$<atri>$ = new Atributos();
 		 		$<atri>$ = $<atri>1;
			}
 			| if
			{ 
 		 		$<atri>$ = new Atributos();
 		 		$<atri>$ = $<atri>1;
			}
 			| switch
			{ 
 		 		$<atri>$ = new Atributos();
 		 		$<atri>$ = $<atri>1;
			}
 			| html
			{ 
 		 		$<atri>$ = new Atributos();
 		 		$<atri>$ = $<atri>1;
			}
 ;

 html :	OPEN_HTML contents CLOSE_HTML
 		{
	 		$<atri>$ = new Atributos();
	 		$<atri->nodo>$ = new NodoJslt(0, "html");
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>1));
	 		$<atri->nodo>$->addNodo(* $<atri->nodo>2);
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>3));
 		}
 	 	| OPEN_BODY contents CLOSE_BODY
 		{
	 		$<atri>$ = new Atributos();
	 		$<atri->nodo>$ = new NodoJslt(0, "html");
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>1));
	 		$<atri->nodo>$->addNodo(* $<atri->nodo>2);
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>3));
 		}
 		| OPEN_HEAD OPEN_TITLE contents CLOSE_TITLE CLOSE_HEAD
 		{
	 		$<atri>$ = new Atributos();
	 		$<atri->nodo>$ = new NodoJslt(0, "html");
	 		sprintf($<cadena>1, "%s %s", $<cadena>1, $<cadena>2);
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>1));
	 		$<atri->nodo>$->addNodo(* $<atri->nodo>3);
	 		sprintf($<cadena>4, "%s %s", $<cadena>4, $<cadena>5);
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>4)); 		
 		}
	  	| OPEN_H1 contents CLOSE_H1
 		{
	 		$<atri>$ = new Atributos();
	 		$<atri->nodo>$ = new NodoJslt(0, "html");
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>1));
	 		$<atri->nodo>$->addNodo(* $<atri->nodo>2);
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>3));
 		}
		| OPEN_H2 contents CLOSE_H2
 		{
	 		$<atri>$ = new Atributos();
	 		$<atri->nodo>$ = new NodoJslt(0, "html");
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>1));
	 		$<atri->nodo>$->addNodo(* $<atri->nodo>2);
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>3));
 		}
		| OPEN_H3 contents CLOSE_H3
 		{
	 		$<atri>$ = new Atributos();
	 		$<atri->nodo>$ = new NodoJslt(0, "html");
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>1));
	 		$<atri->nodo>$->addNodo(* $<atri->nodo>2);
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>3));
 		}
		| OPEN_H4 contents CLOSE_H4
 		{
	 		$<atri>$ = new Atributos();
	 		$<atri->nodo>$ = new NodoJslt(0, "html");
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>1));
	 		$<atri->nodo>$->addNodo(* $<atri->nodo>2);
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>3));
 		}
		| OPEN_H5 contents CLOSE_H5
 		{
	 		$<atri>$ = new Atributos();
	 		$<atri->nodo>$ = new NodoJslt(0, "html");
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>1));
	 		$<atri->nodo>$->addNodo(* $<atri->nodo>2);
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>3));
 		}
		| OPEN_H6 contents CLOSE_H6
 		{
	 		$<atri>$ = new Atributos();
	 		$<atri->nodo>$ = new NodoJslt(0, "html");
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>1));
	 		$<atri->nodo>$->addNodo(* $<atri->nodo>2);
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>3));
 		}
		| OPEN_TABLE atributes SYM_END 	contents CLOSE_TABLE
 		{
	 		$<atri>$ = new Atributos();
	 		$<atri->nodo>$ = new NodoJslt(0, "html");
	 		sprintf($<cadena>1, "%s %s %s", $<cadena>1, $<cadena>2, $<cadena>3);
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>1));
	 		$<atri->nodo>$->addNodo(* $<atri->nodo>4);
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>5));
 		}
		| OPEN_TR atributes SYM_END contents CLOSE_TR
 		{
	 		$<atri>$ = new Atributos();
	 		$<atri->nodo>$ = new NodoJslt(0, "html");
	 		sprintf($<cadena>1, "%s %s %s", $<cadena>1, $<cadena>2, $<cadena>3);
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>1));
	 		$<atri->nodo>$->addNodo(* $<atri->nodo>4);
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>5));
	 	}
 		| OPEN_TH atributes SYM_END contents CLOSE_TH
 		{
	 		$<atri>$ = new Atributos();
	 		$<atri->nodo>$ = new NodoJslt(0, "html");
	 		sprintf($<cadena>1, "%s %s %s", $<cadena>1, $<cadena>2, $<cadena>3);
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>1 ));
	 		$<atri->nodo>$->addNodo(* $<atri->nodo>4);
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>5));
 		}
		| OPEN_TD atributes SYM_END contents CLOSE_TD
 		{
	 		$<atri>$ = new Atributos();
	 		$<atri->nodo>$ = new NodoJslt(0, "html");
	 		sprintf($<cadena>1, "%s %s %s", $<cadena>1, $<cadena>2, $<cadena>3);
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>1 ));
	 		$<atri->nodo>$->addNodo(* $<atri->nodo>4);
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>5));
 		}
		| OPEN_P contents CLOSE_P
 		{
	 		$<atri>$ = new Atributos();
	 		$<atri->nodo>$ = new NodoJslt(0, "html");
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>1));
	 		$<atri->nodo>$->addNodo(* $<atri->nodo>2);
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>3));		
	 	}
		| OPEN_B contents CLOSE_B
 		{
	 		$<atri>$ = new Atributos();
	 		$<atri->nodo>$ = new NodoJslt(0, "html");
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>1));
	 		$<atri->nodo>$->addNodo(* $<atri->nodo>2);
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>3));		
 		}
		| OPEN_I contents CLOSE_I
 		{
	 		$<atri>$ = new Atributos();
	 		$<atri->nodo>$ = new NodoJslt(0, "html");
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>1));
	 		$<atri->nodo>$->addNodo(* $<atri->nodo>2);
	 		$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>3));		
 		}
 ;

 contents : element contents 
		 	{
		 		$<atri>$ = new Atributos();
		 		$<atri>$ = $<atri>2;
		 		$<atri->nodo>$->prepNodo(* $<atri->nodo>1); 
		 	}
		 	| allTokens contents
	 		{
		 		$<atri>$ = new Atributos();
		 		$<atri>$ = $<atri>2;
		 		$<atri->nodo>$->prepNodo(* $<atri->nodo>1); 
	 		}
	 		| %empty 
	 		{
		 		$<atri>$ = new Atributos();
		 		$<atri->nodo>$ = new NodoJslt(0, "contenido");
	 		}
 ;


 declare :  TAG_VARIABLE type ASIGN ID TAG_END 
 			{
 				$<atri>$ = new Atributos();
 				$<atri->nodo>$ = new NodoJslt(0, "declare");
 				$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>2));
 				$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>4));
 			}

 ;

 asigment : TAG_ASIGNAR PR_VAR ASIGN ID PR_VALUE ASIGN expresion TAG_END
 			{
 				$<atri>$ = new Atributos();
 				$<atri->nodo>$ = new NodoJslt(0, "asignar");
 				$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>4));
 				$<atri->nodo>$->addNodo(* $<atri->nodo>6); 			
 			}
 ;

 aplicate : TAG_APLICAR PR_SELECTED ASIGN references TAG_END 
			{
 				$<atri>$ = new Atributos();
 				$<atri->nodo>$ = new NodoJslt(0, "aplicar");
 				$<atri->nodo>$->addNodo(* $<atri->nodo>4); 			
 			}
 ;

 getValue : TAG_VALOR PR_SELECTED ASIGN expresion TAG_END
			{
 				$<atri>$ = new Atributos();
 				$<atri->nodo>$ = new NodoJslt(0, "valor-de");
 				$<atri->nodo>$->addNodo(* $<atri->nodo>4); 			
 			}
 ;

 forEach : OPEN_FOREACH PR_SELECTED ASIGN references SYM_END elements CLOSE_FOREACH
			{
 				$<atri>$ = new Atributos();
 				$<atri->nodo>$ = new NodoJslt(0, "para-cada");
 				$<atri->nodo>$->addNodo(* $<atri->nodo>4);
 				$<atri->nodo>$->addNodo(* $<atri->nodo>6); 			
 			}
 ;

 if : OPEN_IF PR_CONDITION ASIGN expresion SYM_END elements CLOSE_IF
 			{
 				$<atri>$ = new Atributos();
 				$<atri->nodo>$ = new NodoJslt(0, "if");
 				$<atri->nodo>$->addNodo(* $<atri->nodo>4);
 				$<atri->nodo>$->addNodo(* $<atri->nodo>6); 			
 			}
; 

 switch : OPEN_SWITCH cases CLOSE_SWITCH
 			{
 				$<atri>$ = new Atributos();
 				$<atri->nodo>$ = new NodoJslt(0, "en-caso");
 				$<atri->nodo>$->addNodo(* $<atri->nodo>2); 			
 			}
;

 cases : case cases
 		{
 			$<atri>$ = new Atributos();
 			$<atri>$ = $<atri>2;
 			$<atri->nodo>$->prepNodo(* $<atri->nodo>1);
 		}
 		| other 
 		{
 			$<atri>$ = new Atributos();
 			$<atri->nodo>$ = new NodoJslt(0, "casos");
 			$<atri->nodo>$->addNodo(* $<atri->nodo>1);
 		}
 		| %empty 
 		{
			$<atri>$ = new Atributos();
 			$<atri->nodo>$ = new NodoJslt(0, "casos");
 		}
 ;

 case : OPEN_CASE PR_CONDITION ASIGN expresion SYM_END elements CLOSE_CASE
 		{
 			$<atri>$ = new Atributos();
 			$<atri->nodo>$ = new NodoJslt(0, "de");
 			$<atri->nodo>$->addNodo(* $<atri->nodo>4);
 			$<atri->nodo>$->addNodo(* $<atri->nodo>6);
 		}
 ;

 other : OPEN_DEFAULT elements CLOSE_DEFAULT
  		{
 			$<atri>$ = new Atributos();
 			$<atri->nodo>$ = new NodoJslt(0, "cualquier-otro");
 			$<atri->nodo>$->addNodo(* $<atri->nodo>2);
 		}
 ;

 references : SYM_ACTUAL 
 			{
				$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, "referencia");
 				$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>1));
 			}
 		 	| SYM_PADRE
			{
 				$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, "referencia");
 				$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>1));
			} 			
 			| reference OPEN_COR expresion CLOSE_COR
 			{
 				$<atri>$ = new Atributos();
 				$<atri->nodo>$ = new NodoJslt(0, "refPuntero");
 				$<atri->nodo>$->addNodo(* $<atri->nodo>1);
 				$<atri->nodo>$->addNodo(* $<atri->nodo>3);
 			}
 			| reference
 			{
 				$<atri>$ = new Atributos();
 				$<atri>$ = $<atri>1;
 			}
 ;

 reference : reference REF 
 			{
 				$<atri>$ = new Atributos();
 				$<atri>$ = $<atri>1;
 				$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>2));
 			}
 			| reference REFALL
 			{
 				$<atri>$ = new Atributos();
 				$<atri>$ = $<atri>1;
 				$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>2));
 			}
 		 	| REF 
 		 	{
				$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, "referencia");
 				$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>1));
 		 	}
 		 	| REFALL
 			{
				$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, "referencia");
 				$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>1));
 			}
 			| ID
 			{
				$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, "referencia");
 				$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>1));
 			}
 ;

 expresion : logical 
			{
				$<atri>$ = new Atributos();
				$<atri>$ = $<atri>1; 				
 			}
 ;

 logical : 	logical OR logical
			{
				$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, $<cadena>2);
				$<atri->nodo>$->addNodo(* $<atri->nodo>1); 				
				$<atri->nodo>$->addNodo(* $<atri->nodo>3); 				
 			}
		 	| logical NOR logical
			{
				$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, $<cadena>2);
				$<atri->nodo>$->addNodo(* $<atri->nodo>1); 				
				$<atri->nodo>$->addNodo(* $<atri->nodo>3); 				
 			}
		 	| logical XOR logical
			{
				$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, $<cadena>2);
				$<atri->nodo>$->addNodo(* $<atri->nodo>1); 				
				$<atri->nodo>$->addNodo(* $<atri->nodo>3); 				
 			}
		 	| logical AND logical
			{
				$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, $<cadena>2);
				$<atri->nodo>$->addNodo(* $<atri->nodo>1); 				
				$<atri->nodo>$->addNodo(* $<atri->nodo>3); 				
 			}
	 		| logical NAND logical
			{
				$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, $<cadena>2);
				$<atri->nodo>$->addNodo(* $<atri->nodo>1); 				
				$<atri->nodo>$->addNodo(* $<atri->nodo>3); 				
 			}
		 	| NOT logical
			{
				$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, $<cadena>1);
				$<atri->nodo>$->addNodo(* $<atri->nodo>2); 				
 			}
		 	| relational
			{
				$<atri>$ = new Atributos();
				$<atri>$ = $<atri>1;
 			}
 ;

 relational : arithmetic EQUAL arithmetic
			{
				$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, $<cadena>2);
				$<atri->nodo>$->addNodo(* $<atri->nodo>1); 				
				$<atri->nodo>$->addNodo(* $<atri->nodo>3); 				
 			}
		 	| arithmetic NO_EQUAL arithmetic
 			{
				$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, $<cadena>2);
				$<atri->nodo>$->addNodo(* $<atri->nodo>1); 				
				$<atri->nodo>$->addNodo(* $<atri->nodo>3); 				
 			}
		 	| arithmetic LESS_EQUAL arithmetic
			{
				$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, $<cadena>2);
				$<atri->nodo>$->addNodo(* $<atri->nodo>1); 				
				$<atri->nodo>$->addNodo(* $<atri->nodo>3); 				
 			}
		 	| arithmetic LESS arithmetic
			{
				$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, $<cadena>2);
				$<atri->nodo>$->addNodo(* $<atri->nodo>1); 				
				$<atri->nodo>$->addNodo(* $<atri->nodo>3); 				
 			}
		 	| arithmetic HIGHER arithmetic
			{
				$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, $<cadena>2);
				$<atri->nodo>$->addNodo(* $<atri->nodo>1); 				
				$<atri->nodo>$->addNodo(* $<atri->nodo>3); 				
 			}
		 	| arithmetic HIGHER_EQUAL arithmetic
			{
				$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, $<cadena>2);
				$<atri->nodo>$->addNodo(* $<atri->nodo>1); 				
				$<atri->nodo>$->addNodo(* $<atri->nodo>3); 				
 			}
		 	| arithmetic
			{
				$<atri>$ = new Atributos();
				$<atri>$ = $<atri>1;	
 			}

 ;

 arithmetic : arithmetic SUM arithmetic
			{
				$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, $<cadena>2);
				$<atri->nodo>$->addNodo(* $<atri->nodo>1); 				
				$<atri->nodo>$->addNodo(* $<atri->nodo>3); 				
 			}
		 	| arithmetic SUB arithmetic
			{
				$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, $<cadena>2);
				$<atri->nodo>$->addNodo(* $<atri->nodo>1); 				
				$<atri->nodo>$->addNodo(* $<atri->nodo>3); 				
 			}
		 	| arithmetic MUL arithmetic
			{
				$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, $<cadena>2);
				$<atri->nodo>$->addNodo(* $<atri->nodo>1); 				
				$<atri->nodo>$->addNodo(* $<atri->nodo>3); 				
 			}
		 	| arithmetic DIV arithmetic
			{
				$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, $<cadena>2);
				$<atri->nodo>$->addNodo(* $<atri->nodo>1); 				
				$<atri->nodo>$->addNodo(* $<atri->nodo>3); 				
 			}
		 	| arithmetic MOD arithmetic
			{
				$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, $<cadena>2);
				$<atri->nodo>$->addNodo(* $<atri->nodo>1); 				
				$<atri->nodo>$->addNodo(* $<atri->nodo>3); 				
 			}
		 	| arithmetic POW arithmetic
			{
				$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, $<cadena>2);
				$<atri->nodo>$->addNodo(* $<atri->nodo>1); 				
				$<atri->nodo>$->addNodo(* $<atri->nodo>3); 				
 			}
		 	| unitary
			{
				$<atri>$ = new Atributos();
				$<atri>$ = $<atri>1; 				
 			}
 ;

 unitary : 	OPEN_PAR expresion CLOSE_PAR
			{
				$<atri>$ = new Atributos();
				$<atri>$ = $<atri>2; 				
 			}
		 	| NOTHING ID
			{
				$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, $<cadena>1);
				$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>2)); 				
 			}
	 	 	| variety ID
			{
				$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, $<cadena>1);
				$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>2)); 				
 			}
	 		| ID variety
			{
				$<atri>$ = new Atributos();
				$<atri->nodo>$ = new NodoJslt(0, $<cadena>2);
				$<atri->nodo>$->addNodo(* new NodoJslt(0, $<cadena>1)); 				
 			}
	 		| value
			{
				$<atri>$ = new Atributos();
				$<atri>$ = $<atri>1; 				
 			}
 ;

 variety : INC 	{ sprintf($$, "%s", $1); }
 	| DEC 		{ sprintf($$, "%s", $1); }
 ;

 value : ENTERO
		{
			$<atri>$ = new Atributos();
			$<atri->nodo>$ = new NodoJslt(0, $<cadena>1); 				
		}
	 	| CARACTER
		{
			$<atri>$ = new Atributos();
			$<atri->nodo>$ = new NodoJslt(0, $<cadena>1); 				
		}
	 	| CADENA
		{
			$<atri>$ = new Atributos();
			$<atri->nodo>$ = new NodoJslt(0, $<cadena>1); 				
		}
	 	| FLOTANTE
		{
			$<atri>$ = new Atributos();
			$<atri->nodo>$ = new NodoJslt(0, $<cadena>1); 				
		}
	 	| TRUE 
		{
			$<atri>$ = new Atributos();
			$<atri->nodo>$ = new NodoJslt(0, $<cadena>1); 				
		}
	 	| FALSE 
		{
			$<atri>$ = new Atributos();
			$<atri->nodo>$ = new NodoJslt(0, $<cadena>1); 				
		}
	 	| references
		{
			$<atri>$ = new Atributos();
			$<atri>$ = $<atri>1; 				
		}
 ; 

  allTokens : ENTERO 	{ sprintf($$, "%s", $1); }
	| CADENA 	 		{ sprintf($$, "%s", $1); }
	| CARACTER 			{ sprintf($$, "%s", $1); }
	| FLOTANTE 			{ sprintf($$, "%s", $1); }
	| TRUE 				{ sprintf($$, "%s", $1); }
	| FALSE 			{ sprintf($$, "%s", $1); }
	| ID 				{ sprintf($$, "%s", $1); }
	| REF               { sprintf($$, "%s", $1); }
	| PR_SELECTED		{ sprintf($$, "%s", $1); }
	| PR_CONDITION		{ sprintf($$, "%s", $1); }
	| PR_NAME_OBJ		{ sprintf($$, "%s", $1); }
	| PR_RUTA			{ sprintf($$, "%s", $1); }
	| PR_VERSION		{ sprintf($$, "%s", $1); }
	| PR_VALUE			{ sprintf($$, "%s", $1); }
	| PR_VAR			{ sprintf($$, "%s", $1); }
	| PR_BORDER			{ sprintf($$, "%s", $1); }
	| PR_BGCOLOR		{ sprintf($$, "%s", $1); }
	| PR_WIDTH			{ sprintf($$, "%s", $1); }
	| PR_HEIGHT			{ sprintf($$, "%s", $1); }
	| ASIGN				{ sprintf($$, "%s", $1); }
	| EQUAL				{ sprintf($$, "%s", $1); }
	| NO_EQUAL			{ sprintf($$, "%s", $1); }
	| LESS_EQUAL		{ sprintf($$, "%s", $1); }
	| LESS				{ sprintf($$, "%s", $1); }
	| HIGHER			{ sprintf($$, "%s", $1); }
	| HIGHER_EQUAL		{ sprintf($$, "%s", $1); }
	| NOTHING			{ sprintf($$, "%s", $1); }
	| OR				{ sprintf($$, "%s", $1); }
	| AND				{ sprintf($$, "%s", $1); }
	| NAND				{ sprintf($$, "%s", $1); }
	| NOR				{ sprintf($$, "%s", $1); }
	| XOR				{ sprintf($$, "%s", $1); }
	| NOT				{ sprintf($$, "%s", $1); }
	| SUM				{ sprintf($$, "%s", $1); }
	| SUB				{ sprintf($$, "%s", $1); }
	| MUL				{ sprintf($$, "%s", $1); }
	| DIV				{ sprintf($$, "%s", $1); }
	| MOD				{ sprintf($$, "%s", $1); }
	| POW				{ sprintf($$, "%s", $1); }
	| INC				{ sprintf($$, "%s", $1); }
	| DEC				{ sprintf($$, "%s", $1); }
	| EVERYTHING		{ sprintf($$, "%s", $1); }
	| TYPE_ENTERO		{ sprintf($$, "%s", $1); }
	| TYPE_CADENA		{ sprintf($$, "%s", $1); }
	| TYPE_BOOLEAN		{ sprintf($$, "%s", $1); }
	| TYPE_DOUBLE		{ sprintf($$, "%s", $1); }
	| TYPE_CARACTER		{ sprintf($$, "%s", $1); }
	| SYM_ACTUAL		{ sprintf($$, "%s", $1); }
	| SYM_RAIZ			{ sprintf($$, "%s", $1); }
	| SYM_PADRE			{ sprintf($$, "%s", $1); }
	| SYM_END			{ sprintf($$, "%s", $1); }
	| OPEN_PAR			{ sprintf($$, "%s", $1); }
	| CLOSE_PAR			{ sprintf($$, "%s", $1); }
	| OPEN_COR			{ sprintf($$, "%s", $1); }
	| CLOSE_COR			{ sprintf($$, "%s", $1); }
 ;

 atributes : atribute atributes 	{ sprintf($$, "%s %s", $1, $2); }
 	| %empty 						{ sprintf($$, "%s", ""); }
 ;

 atribute : PR_BORDER ASIGN CADENA  { sprintf($$, "%s=%s", $1, $3); }
	| PR_BGCOLOR ASIGN CADENA 		{ sprintf($$, "%s=%s", $1, $3); }
	| PR_WIDTH ASIGN CADENA 		{ sprintf($$, "%s=%s", $1, $3); }
	| PR_HEIGHT ASIGN CADENA 		{ sprintf($$, "%s=%s", $1, $3); }
 ;

 type : TYPE_ENTERO { sprintf($$, "%s", $1); }
 	| TYPE_CADENA 	{ sprintf($$, "%s", $1); }
	| TYPE_BOOLEAN 	{ sprintf($$, "%s", $1); }
 	| TYPE_CARACTER { sprintf($$, "%s", $1); }
 ;

%%

void jsltinit(){
	jsltline = 1;
}

void jslterror(char *s)
{
  fprintf(stderr, "Error sintactico: %s", s);
}