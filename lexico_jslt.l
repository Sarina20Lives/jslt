%option noyywrap

%{
#include <stdio.h>
#include <stdlib.h>
#include "sintactico_jslt.h"
int jsltline = 1;
%}

ENTERO [0-9]+
FLOTANTE {ENTERO}"."{ENTERO}
CARACTER \'([^\n\']|\\\')\'
CADENA   \"(([^\n\"]|\\\\|\\\/|\\\"|\\b|\\f|\\n|\\r|\\t)*)\"
ID [A-Za-z][A-Za-z0-9_]*
REF @{ID}
REFALL @@{ID}

%%

"<html>"	{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (OPEN_HTML); 
			};

"</html>"	{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (CLOSE_HTML); 
			};

"<body>"	{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (OPEN_BODY); 
			};

"</body>"	{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (CLOSE_BODY); 
			};

"<head>"	{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (OPEN_HEAD); 
			};

"</head>"	{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (CLOSE_HEAD); 
			};

"<title>"	{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (OPEN_TITLE); 
			};

"</title>"	{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (CLOSE_TITLE); 
			};

"<h1>"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (OPEN_H1); 
			};

"</h1>"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (CLOSE_H1); 
			};

"<h2>"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (OPEN_H2); 
			};

"</h2>"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (CLOSE_H2); 
			};

"<h3>"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (OPEN_H3); 
			};

"</h3>"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (CLOSE_H3); 
			};

"<h4>"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (OPEN_H4); 
			};

"</h4>"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (CLOSE_H4); 
			};

"<h5>"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (OPEN_H5); 
			};

"</h5>"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (CLOSE_H5); 
			};

"<h6>"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (OPEN_H6); 
			};

"</h6>"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (CLOSE_H6); 
			};

"<table"	{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (OPEN_TABLE); 
			};

"</table>"	{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (CLOSE_TABLE); 
			};

"<tr"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (OPEN_TR); 
			};

"</tr>"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (CLOSE_TR); 
			};

"<th"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (OPEN_TH); 
			};

"</th>"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (CLOSE_TH); 
			};

"<td"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (OPEN_TD); 
			};

"</td>"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (CLOSE_TD); 
			};

"<p>"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (OPEN_P); 
			};

"</p>"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (CLOSE_P); 
			};

"<b>"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (OPEN_B); 
			};

"</b>"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (CLOSE_B); 
			};

"<i>"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (OPEN_I); 
			};

"</i>"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (CLOSE_I); 
			};

"border"	{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (PR_BORDER); 
			};

"bgcolor"	{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (PR_BGCOLOR); 
			};

"width"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (PR_WIDTH); 
			};

"height"	{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (PR_HEIGHT); 
			};



 
"<jsl:transformacion"		{ return (TAG_TRANSFORMER); };

"</jsl:final>"				{ return (TAG_FINAL); };

"<jsl:plantilla"			{ return (OPEN_PLANTILLA); };

"</jsl:plantilla>"			{ return (CLOSE_PLANTILLA); };

"/>"						{ return (TAG_END);	};

"<jsl:variable"				{ return (TAG_VARIABLE); };

"<jsl:asignar"				{ return (TAG_ASIGNAR); };

"<jsl:plantilla-aplicar"	{ return (TAG_APLICAR)	; };

"<jsl:valor-de"				{ return (TAG_VALOR); };

"<jsl:para-cada"			{ return (OPEN_FOREACH); };

"</jsl:para-cada>"			{ return (CLOSE_FOREACH); };

"<jsl:if"					{ return (OPEN_IF); };

"</jsl:if>"					{ return (CLOSE_IF); };

"<jsl:en-caso>"				{ return (OPEN_SWITCH); };

"</jsl:en-caso>"			{ return (CLOSE_SWITCH); };

"<jsl:de"					{ return (OPEN_CASE); };

"</jsl:de>"					{ return (CLOSE_CASE); };

"<jsl:cualquier-otro>"		{ return (OPEN_DEFAULT); };

"</jsl:cualquier-otro>"		{ return (CLOSE_DEFAULT); };

"seleccionar"				{ return (PR_SELECTED); };

"condicion"					{ return (PR_CONDITION); };

"nombreObj"					{ return (PR_NAME_OBJ); };

"ruta"						{ return (PR_RUTA); };

"version"					{ return (PR_VERSION); };

"valor"						{ return (PR_VALUE); };

"variable"					{ return (PR_VAR); };




{REF}		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (REF); 
			};

{REFALL}	{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (REFALL); 
			};

"."			{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (SYM_ACTUAL); 
			};

"@"			{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (SYM_RAIZ); 
			};

".."		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (SYM_PADRE); 
			};




"entero"	{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return(TYPE_ENTERO); 
			};

"cadena"	{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return(TYPE_CADENA); 
			};

"boolean"	{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return(TYPE_BOOLEAN); 
			};

"double"	{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return(TYPE_DOUBLE); 
			};

"caracter"	{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return(TYPE_CARACTER); 
			};



"=="		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return(EQUAL); 
			};

"="			{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (ASIGN); 
			};

"!="		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return(NO_EQUAL); 
			};

"&lte"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return(LESS_EQUAL); 
			};

"&lt"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return(LESS); 
			};

"&gt"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return(HIGHER); 
			};

"&gte"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return(HIGHER_EQUAL); 
			};

"!¡"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return(NOTHING); 
			};

"||"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return(OR); 
			};

"&&"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return(AND); 
			};

"!&&"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return(NAND); 
			};

"!||"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return(NOR); 
			};

"&|"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return(XOR); 
			};

"!"			{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return(NOT); 
			};

"+"			{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return(SUM); 
			};

"-"			{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return(SUB); 
			};

"*"			{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return(MUL); 
			};

"div"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return(DIV); 
			};

"%"			{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return(MOD); 
			};

"^"			{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return(POW); 
			};

"++"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return(INC); 
			};

"--"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return(DEC); 
			};

"("			{ sprintf(jsltlval.cadena, "%s", jslttext); 
				  return (OPEN_PAR); 
				};

")"			{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (CLOSE_PAR); 
			};

"["			{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (OPEN_COR); 
			};

"]"			{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (CLOSE_COR); 
			};


">"			{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (SYM_END); 
			};



"true"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (TRUE); 
			};

"false"		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (FALSE); 
			};


{ENTERO} 	{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (ENTERO); 
			};

{FLOTANTE}	{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (FLOTANTE); 
			};

{CARACTER} 	{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (CARACTER); 
			};

{CADENA} 	{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (CADENA); 
			};

{ID} 		{ sprintf(jsltlval.cadena, "%s", jslttext); 
			  return (ID); 
			};


"##"[^\n]*     			{ /* comentario de una línea */ } ;
"#\*"[^(\*#)]*"\*#"   	{ /* comentarios multilínea*/ }; 
"<#"[^(#>)]*"#>"   		{ /* comentarios multilínea*/ }; 
[\t ]+					{ /* espacios en blanco */ }
\n       			    { jsltline++; }; 

.		{ fprintf(stderr, "Error léxico '%s' en la línea %d\n", jslttext, jsltline); 
		  sprintf(jsltlval.cadena, "%s", jslttext); 
		  return (EVERYTHING); 
		};
%%

