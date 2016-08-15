/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_JSLT_SINTACTICO_JSLT_H_INCLUDED
# define YY_JSLT_SINTACTICO_JSLT_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int jsltdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    OPEN_HTML = 258,
    CLOSE_HTML = 259,
    OPEN_BODY = 260,
    CLOSE_BODY = 261,
    OPEN_HEAD = 262,
    OPEN_TITLE = 263,
    CLOSE_TITLE = 264,
    CLOSE_HEAD = 265,
    OPEN_H1 = 266,
    CLOSE_H1 = 267,
    OPEN_H2 = 268,
    CLOSE_H2 = 269,
    OPEN_H3 = 270,
    CLOSE_H3 = 271,
    OPEN_H4 = 272,
    CLOSE_H4 = 273,
    OPEN_H5 = 274,
    CLOSE_H5 = 275,
    OPEN_H6 = 276,
    CLOSE_H6 = 277,
    OPEN_TABLE = 278,
    CLOSE_TABLE = 279,
    OPEN_TR = 280,
    CLOSE_TR = 281,
    OPEN_TH = 282,
    CLOSE_TH = 283,
    OPEN_TD = 284,
    CLOSE_TD = 285,
    OPEN_P = 286,
    CLOSE_P = 287,
    OPEN_B = 288,
    CLOSE_B = 289,
    OPEN_I = 290,
    CLOSE_I = 291,
    PR_BORDER = 292,
    PR_BGCOLOR = 293,
    PR_WIDTH = 294,
    PR_HEIGHT = 295,
    TAG_TRANSFORMER = 296,
    TAG_FINAL = 297,
    OPEN_PLANTILLA = 298,
    CLOSE_PLANTILLA = 299,
    TAG_END = 300,
    TAG_VARIABLE = 301,
    TAG_ASIGNAR = 302,
    TAG_APLICAR = 303,
    TAG_VALOR = 304,
    OPEN_FOREACH = 305,
    CLOSE_FOREACH = 306,
    OPEN_IF = 307,
    CLOSE_IF = 308,
    OPEN_SWITCH = 309,
    CLOSE_SWITCH = 310,
    OPEN_CASE = 311,
    CLOSE_CASE = 312,
    OPEN_DEFAULT = 313,
    CLOSE_DEFAULT = 314,
    PR_SELECTED = 315,
    PR_CONDITION = 316,
    PR_NAME_OBJ = 317,
    PR_RUTA = 318,
    PR_VERSION = 319,
    PR_VALUE = 320,
    PR_VAR = 321,
    REFALL = 322,
    REF = 323,
    SYM_ACTUAL = 324,
    SYM_RAIZ = 325,
    SYM_PADRE = 326,
    TYPE_ENTERO = 327,
    TYPE_CADENA = 328,
    TYPE_BOOLEAN = 329,
    TYPE_DOUBLE = 330,
    TYPE_CARACTER = 331,
    EQUAL = 332,
    ASIGN = 333,
    NO_EQUAL = 334,
    LESS_EQUAL = 335,
    LESS = 336,
    HIGHER = 337,
    HIGHER_EQUAL = 338,
    NOTHING = 339,
    OR = 340,
    AND = 341,
    NAND = 342,
    NOR = 343,
    XOR = 344,
    NOT = 345,
    SUM = 346,
    SUB = 347,
    MUL = 348,
    DIV = 349,
    MOD = 350,
    POW = 351,
    INC = 352,
    DEC = 353,
    OPEN_PAR = 354,
    CLOSE_PAR = 355,
    OPEN_COR = 356,
    CLOSE_COR = 357,
    SYM_END = 358,
    EVERYTHING = 359,
    CARACTER = 360,
    FLOTANTE = 361,
    ENTERO = 362,
    CADENA = 363,
    ID = 364,
    TRUE = 365,
    FALSE = 366
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 20 "sintactico_jslt.y" /* yacc.c:1909  */

	char cadena[1000];
	struct Atributos * atri;

#line 171 "sintactico_jslt.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE jsltlval;

int jsltparse (void);

#endif /* !YY_JSLT_SINTACTICO_JSLT_H_INCLUDED  */
