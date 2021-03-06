/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         jsltparse
#define yylex           jsltlex
#define yyerror         jslterror
#define yydebug         jsltdebug
#define yynerrs         jsltnerrs

#define yylval          jsltlval
#define yychar          jsltchar

/* Copy the first part of user declarations.  */
#line 1 "sintactico_jslt.y" /* yacc.c:339  */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>	
#include "nodojslt.h"
#include "lexico_jslt.h"
#include "tipos.h"
#include <QString>
extern int jsltlex(void);
extern char * jslttext;
extern int jsltline;
void jslterror(char * s);
QString salida;


Tipos *tipo = new Tipos();
NodoJslt *raiz = new NodoJslt();

struct Atributos{
	NodoJslt *nodo = new NodoJslt();
};


#line 98 "sintactico_jslt.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "sintactico_jslt.h".  */
#ifndef YY_JSLT_SINTACTICO_JSLT_H_INCLUDED
# define YY_JSLT_SINTACTICO_JSLT_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int jsltdebug;
#endif
/* "%code requires" blocks.  */
#line 24 "sintactico_jslt.y" /* yacc.c:355  */

    #include "nodojslt.h"

#line 132 "sintactico_jslt.cpp" /* yacc.c:355  */

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
#line 31 "sintactico_jslt.y" /* yacc.c:355  */

	char cadena[1000];
	struct Atributos * atri;

#line 261 "sintactico_jslt.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE jsltlval;

int jsltparse (void);
/* "%code provides" blocks.  */
#line 27 "sintactico_jslt.y" /* yacc.c:355  */
 
	NodoJslt * parsejslt(QString *entrada, QList<QString> *errores); 

#line 276 "sintactico_jslt.cpp" /* yacc.c:355  */

#endif /* !YY_JSLT_SINTACTICO_JSLT_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 282 "sintactico_jslt.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   343

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  112
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  162
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  297

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   366

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   119,   119,   127,   137,   143,   149,   156,   165,   170,
     177,   183,   191,   197,   204,   209,   214,   219,   224,   229,
     234,   239,   246,   254,   262,   273,   281,   289,   297,   305,
     313,   321,   330,   339,   348,   357,   365,   373,   383,   389,
     395,   403,   413,   422,   430,   438,   447,   456,   464,   470,
     476,   483,   492,   500,   506,   512,   519,   526,   532,   538,
     544,   550,   558,   565,   572,   579,   586,   593,   600,   606,
     613,   620,   627,   634,   641,   648,   655,   663,   670,   677,
     684,   691,   698,   705,   712,   717,   723,   731,   738,   745,
     750,   756,   761,   766,   771,   776,   781,   786,   793,   794,
     795,   796,   797,   798,   799,   800,   801,   802,   803,   804,
     805,   806,   807,   808,   809,   810,   811,   812,   813,   814,
     815,   816,   817,   818,   819,   820,   821,   822,   823,   824,
     825,   826,   827,   828,   829,   830,   831,   832,   833,   834,
     835,   836,   837,   838,   839,   840,   841,   842,   843,   844,
     845,   846,   847,   850,   851,   854,   855,   856,   857,   860,
     865,   870,   875
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OPEN_HTML", "CLOSE_HTML", "OPEN_BODY",
  "CLOSE_BODY", "OPEN_HEAD", "OPEN_TITLE", "CLOSE_TITLE", "CLOSE_HEAD",
  "OPEN_H1", "CLOSE_H1", "OPEN_H2", "CLOSE_H2", "OPEN_H3", "CLOSE_H3",
  "OPEN_H4", "CLOSE_H4", "OPEN_H5", "CLOSE_H5", "OPEN_H6", "CLOSE_H6",
  "OPEN_TABLE", "CLOSE_TABLE", "OPEN_TR", "CLOSE_TR", "OPEN_TH",
  "CLOSE_TH", "OPEN_TD", "CLOSE_TD", "OPEN_P", "CLOSE_P", "OPEN_B",
  "CLOSE_B", "OPEN_I", "CLOSE_I", "PR_BORDER", "PR_BGCOLOR", "PR_WIDTH",
  "PR_HEIGHT", "TAG_TRANSFORMER", "TAG_FINAL", "OPEN_PLANTILLA",
  "CLOSE_PLANTILLA", "TAG_END", "TAG_VARIABLE", "TAG_ASIGNAR",
  "TAG_APLICAR", "TAG_VALOR", "OPEN_FOREACH", "CLOSE_FOREACH", "OPEN_IF",
  "CLOSE_IF", "OPEN_SWITCH", "CLOSE_SWITCH", "OPEN_CASE", "CLOSE_CASE",
  "OPEN_DEFAULT", "CLOSE_DEFAULT", "PR_SELECTED", "PR_CONDITION",
  "PR_NAME_OBJ", "PR_RUTA", "PR_VERSION", "PR_VALUE", "PR_VAR", "REFALL",
  "REF", "SYM_ACTUAL", "SYM_RAIZ", "SYM_PADRE", "TYPE_ENTERO",
  "TYPE_CADENA", "TYPE_BOOLEAN", "TYPE_DOUBLE", "TYPE_CARACTER", "EQUAL",
  "ASIGN", "NO_EQUAL", "LESS_EQUAL", "LESS", "HIGHER", "HIGHER_EQUAL",
  "NOTHING", "OR", "AND", "NAND", "NOR", "XOR", "NOT", "SUM", "SUB", "MUL",
  "DIV", "MOD", "POW", "INC", "DEC", "OPEN_PAR", "CLOSE_PAR", "OPEN_COR",
  "CLOSE_COR", "SYM_END", "EVERYTHING", "CARACTER", "FLOTANTE", "ENTERO",
  "CADENA", "ID", "TRUE", "FALSE", "$accept", "jslt", "transformer",
  "templates", "template", "nameTemplate", "refList", "elements",
  "element", "html", "contents", "declare", "asigment", "aplicate",
  "getValue", "forEach", "if", "switch", "cases", "case", "other",
  "references", "reference", "expresion", "logical", "relational",
  "arithmetic", "unitary", "variety", "value", "allTokens", "atributes",
  "atribute", "type", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366
};
# endif

#define YYPACT_NINF -190

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-190)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -28,   -38,    37,  -190,   -39,  -190,   -67,   -21,   -31,   -53,
     -41,    27,     6,     8,    30,    27,    27,    -1,  -190,  -190,
    -190,  -190,     1,  -190,  -190,  -190,   -47,   -14,  -190,  -190,
      20,    43,    83,    17,  -190,  -190,   232,   232,   122,   232,
     232,   232,   232,   232,   232,    70,    70,    70,    70,   232,
     232,   232,    73,    76,    89,    97,   124,   -27,   142,    17,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,   232,   183,   232,   182,   232,   177,   176,
     175,   174,   173,   172,   117,   118,   119,   120,    96,    70,
      98,    99,   100,   178,   166,   169,   126,   128,   129,   133,
     134,   152,    17,   159,   -27,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,   206,  -190,  -190,  -190,  -190,  -190,  -190,   108,
     109,   110,   111,   232,  -190,   232,   232,   232,  -190,  -190,
    -190,   112,    18,     7,    18,     7,   144,   161,  -190,  -190,
     213,  -190,  -190,  -190,  -190,   200,   199,   198,   197,   163,
    -190,  -190,  -190,  -190,  -190,   184,   -50,   121,     7,  -190,
    -190,     7,  -190,  -190,  -190,  -190,    -4,  -190,  -190,  -190,
     189,    13,  -190,    52,  -190,   127,  -190,   135,   137,     7,
    -190,  -190,  -190,  -190,  -190,  -190,   164,  -190,  -190,  -190,
       7,  -190,  -190,   141,  -190,  -190,     7,     7,     7,     7,
       7,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,  -190,    17,    17,   143,     7,   146,  -190,
      39,  -190,  -190,    39,    39,    86,    86,    86,    86,    86,
      86,    60,    60,   148,   148,   148,  -190,   201,   205,    17,
     209,  -190,  -190,  -190,   193,  -190,  -190
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     0,     1,     0,     0,     0,     0,
       0,     6,     0,     0,     0,     6,     6,     0,   159,   160,
     161,   162,     0,     3,     4,     5,     0,     0,    11,     9,
       0,     8,     0,    13,    10,    41,    40,    40,     0,    40,
      40,    40,    40,    40,    40,   154,   154,   154,   154,    40,
      40,    40,     0,     0,     0,     0,     0,    50,     0,    13,
      21,    14,    15,    16,    17,    18,    19,    20,   113,   114,
     115,   116,   106,   107,   108,   109,   110,   111,   112,   105,
     145,   146,   147,   140,   141,   142,   143,   144,   118,   117,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     149,   150,   151,   152,   148,   139,   100,   101,    98,    99,
     104,   102,   103,    40,     0,    40,     0,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   154,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    13,     0,    50,    49,     7,    12,    38,    22,
      39,    23,     0,    25,    26,    27,    28,    29,    30,     0,
       0,     0,     0,    40,   153,    40,    40,    40,    35,    36,
      37,     0,     0,     0,     0,     0,     0,     0,    47,    48,
       0,   155,   156,   157,   158,     0,     0,     0,     0,     0,
      60,    59,    53,    54,    61,     0,    56,     0,     0,    89,
      90,     0,    92,    94,    91,    93,    61,    95,    96,    97,
       0,    62,    69,    76,    83,     0,    88,     0,     0,     0,
      52,    24,    31,    32,    33,    34,     0,    43,    58,    57,
       0,    85,    68,     0,    87,    44,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    86,    13,    13,     0,     0,     0,    84,
      63,    66,    67,    64,    65,    70,    71,    72,    73,    74,
      75,    77,    78,    79,    80,    81,    82,     0,     0,    13,
       0,    55,    45,    46,     0,    42,    51
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -190,  -190,  -190,   168,  -190,  -190,  -190,   -56,   -33,  -190,
     -35,    38,  -190,  -190,  -190,  -190,  -190,  -190,   106,  -190,
    -190,  -149,  -190,  -184,  -189,  -190,   -86,  -190,    46,  -190,
    -190,   -36,  -190,  -190
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    14,    15,    30,    31,    58,   123,    60,
     124,    61,    62,    63,    64,    65,    66,    67,   153,   154,
     155,   219,   206,   220,   221,   222,   223,   224,   225,   226,
     125,   138,   139,    22
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      59,   228,   126,   157,   128,   129,   130,   131,   132,   133,
     140,   141,   142,     1,   143,   144,   145,   238,   239,   242,
      36,    28,    37,    29,    38,     4,    59,   243,    39,   151,
      40,   152,    41,   205,    42,   227,    43,     5,    44,     6,
      45,     7,    46,     8,    47,   266,    48,     9,    49,    16,
      50,   240,    51,    16,    16,    10,   268,   270,   271,   272,
     273,   274,    11,    13,    52,    53,    54,    55,    17,    56,
      12,    57,    23,    13,   200,   201,   202,    26,   203,    27,
      18,    19,    20,   290,    21,   200,   201,   202,   158,   203,
     160,   207,   162,   209,   210,    32,   187,   208,   246,   247,
     248,   249,   250,   174,   209,   210,   211,   134,   135,   136,
     137,    34,   212,   213,   214,   215,   216,   217,   218,    59,
     200,   201,   202,    33,   203,   247,   248,   204,    35,   251,
     127,   252,   253,   254,   255,   256,   147,   207,   195,   146,
     196,   197,   198,   257,   258,   259,   260,   261,   262,   148,
     209,   210,   211,   259,   260,   261,   262,   149,   212,   213,
     214,   215,   216,   217,   218,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   257,   258,   259,
     260,   261,   262,    24,    25,   150,   156,   159,   161,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     179,   175,   176,   177,   181,   180,   182,   183,   287,   288,
     178,   184,   185,   186,   188,   190,   191,   192,   193,   194,
     230,   199,   229,   231,   232,   233,   234,   235,   236,   237,
     241,    59,    59,   294,   245,    36,   263,    37,   264,    38,
     265,   269,   267,    39,   262,    40,   289,    41,   291,    42,
     296,    43,   292,    44,   295,    45,    59,    46,   293,    47,
     189,    48,   244,    49,     0,    50,     0,    51,     0,    68,
      69,    70,    71,     0,     0,     0,     0,     0,    13,    52,
      53,    54,    55,     0,    56,     0,    57,     0,     0,     0,
       0,     0,    72,    73,    74,    75,    76,    77,    78,     0,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122
};

static const yytype_int16 yycheck[] =
{
      33,   185,    37,    59,    39,    40,    41,    42,    43,    44,
      46,    47,    48,    41,    49,    50,    51,    67,    68,   208,
       3,    68,     5,    70,     7,    63,    59,   211,    11,    56,
      13,    58,    15,   182,    17,   184,    19,     0,    21,    78,
      23,   108,    25,    64,    27,   229,    29,    78,    31,    11,
      33,   101,    35,    15,    16,   108,   240,   246,   247,   248,
     249,   250,   103,    46,    47,    48,    49,    50,    62,    52,
      43,    54,    42,    46,    67,    68,    69,    78,    71,    78,
      72,    73,    74,   267,    76,    67,    68,    69,   123,    71,
     125,    84,   127,    97,    98,   109,   152,    90,    85,    86,
      87,    88,    89,   139,    97,    98,    99,    37,    38,    39,
      40,    68,   105,   106,   107,   108,   109,   110,   111,   152,
      67,    68,    69,   103,    71,    86,    87,   109,    45,    77,
       8,    79,    80,    81,    82,    83,    60,    84,   173,    66,
     175,   176,   177,    91,    92,    93,    94,    95,    96,    60,
      97,    98,    99,    93,    94,    95,    96,    60,   105,   106,
     107,   108,   109,   110,   111,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,    91,    92,    93,
      94,    95,    96,    15,    16,    61,    44,     4,     6,    12,
      14,    16,    18,    20,    22,    78,    78,    78,    78,   103,
      34,   103,   103,   103,    78,    36,    78,    78,   264,   265,
      32,    78,    78,    61,    55,     9,   108,   108,   108,   108,
      59,   109,    78,    10,    24,    26,    28,    30,    65,    45,
     109,   264,   265,   289,    45,     3,   109,     5,   103,     7,
     103,   100,    78,    11,    96,    13,   103,    15,   102,    17,
      57,    19,    51,    21,    45,    23,   289,    25,    53,    27,
     154,    29,   216,    31,    -1,    33,    -1,    35,    -1,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    -1,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,   113,   114,    63,     0,    78,   108,    64,    78,
     108,   103,    43,    46,   115,   116,   123,    62,    72,    73,
      74,    76,   145,    42,   115,   115,    78,    78,    68,    70,
     117,   118,   109,   103,    68,    45,     3,     5,     7,    11,
      13,    15,    17,    19,    21,    23,    25,    27,    29,    31,
      33,    35,    47,    48,    49,    50,    52,    54,   119,   120,
     121,   123,   124,   125,   126,   127,   128,   129,    37,    38,
      39,    40,    60,    61,    62,    63,    64,    65,    66,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   120,   122,   142,   122,     8,   122,   122,
     122,   122,   122,   122,    37,    38,    39,    40,   143,   144,
     143,   143,   143,   122,   122,   122,    66,    60,    60,    60,
      61,    56,    58,   130,   131,   132,    44,   119,   122,     4,
     122,     6,   122,    12,    14,    16,    18,    20,    22,    78,
      78,    78,    78,   103,   143,   103,   103,   103,    32,    34,
      36,    78,    78,    78,    78,    78,    61,   119,    55,   130,
       9,   108,   108,   108,   108,   122,   122,   122,   122,   109,
      67,    68,    69,    71,   109,   133,   134,    84,    90,    97,
      98,    99,   105,   106,   107,   108,   109,   110,   111,   133,
     135,   136,   137,   138,   139,   140,   141,   133,   135,    78,
      59,    10,    24,    26,    28,    30,    65,    45,    67,    68,
     101,   109,   136,   135,   140,    45,    85,    86,    87,    88,
      89,    77,    79,    80,    81,    82,    83,    91,    92,    93,
      94,    95,    96,   109,   103,   103,   135,    78,   135,   100,
     136,   136,   136,   136,   136,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   119,   119,   103,
     135,   102,    51,    53,   119,    45,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   112,   113,   114,   115,   115,   115,   116,   117,   117,
     118,   118,   119,   119,   120,   120,   120,   120,   120,   120,
     120,   120,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   122,   122,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   130,
     130,   131,   132,   133,   133,   133,   133,   134,   134,   134,
     134,   134,   135,   136,   136,   136,   136,   136,   136,   136,
     137,   137,   137,   137,   137,   137,   137,   138,   138,   138,
     138,   138,   138,   138,   139,   139,   139,   139,   139,   140,
     140,   141,   141,   141,   141,   141,   141,   141,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   143,   143,   144,   144,   144,   144,   145,
     145,   145,   145
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,    10,     2,     2,     0,     7,     1,     1,
       2,     1,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     5,     3,     3,     3,     3,     3,
       3,     5,     5,     5,     5,     3,     3,     3,     2,     2,
       0,     5,     8,     5,     5,     7,     7,     3,     2,     1,
       0,     7,     3,     1,     1,     4,     1,     2,     2,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     2,     1,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     1,     3,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     3,     3,     3,     3,     1,
       1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 120 "sintactico_jslt.y" /* yacc.c:1646  */
    {
 			(yyval.atri) = new Atributos();
			(yyval.atri) = (yyvsp[0].atri);
			raiz = (yyval.atri->nodo);
 		}
#line 1606 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 128 "sintactico_jslt.y" /* yacc.c:1646  */
    {
			 		(yyval.atri) = new Atributos();
			 		(yyval.atri->nodo) = new NodoJslt(tipo->TRANSFORMER, "transformacion");
			 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->CADENA, (yyvsp[-6].cadena)));
			 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->CADENA, (yyvsp[-3].cadena)));
					(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo));  		
			 	}
#line 1618 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 138 "sintactico_jslt.y" /* yacc.c:1646  */
    {
			 		(yyval.atri) = new Atributos();
			 		(yyval.atri) = (yyvsp[0].atri);
			 		(yyval.atri->nodo)->prepNodo(* (yyvsp[-1].atri->nodo));
			 	}
#line 1628 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 144 "sintactico_jslt.y" /* yacc.c:1646  */
    {
			 		(yyval.atri) = new Atributos();
			 		(yyval.atri) = (yyvsp[0].atri);
			 		(yyval.atri->nodo)->prepNodo(* (yyvsp[-1].atri->nodo));
			 	}
#line 1638 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 150 "sintactico_jslt.y" /* yacc.c:1646  */
    {
			 		(yyval.atri) = new Atributos();
			 		(yyval.atri->nodo) = new NodoJslt(tipo->PLANTILLAS, "plantillas");
			 	}
#line 1647 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 157 "sintactico_jslt.y" /* yacc.c:1646  */
    {
		 		(yyval.atri) = new Atributos();
			 	(yyval.atri->nodo) = new NodoJslt(tipo->PLANTILLA, "plantilla");
			 	(yyval.atri->nodo)->addNodo(* (yyvsp[-3].atri->nodo));
			 	(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo));
 			}
#line 1658 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 166 "sintactico_jslt.y" /* yacc.c:1646  */
    {
			 		(yyval.atri) = new Atributos();
			 		(yyval.atri) = (yyvsp[0].atri);
 				}
#line 1667 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 171 "sintactico_jslt.y" /* yacc.c:1646  */
    {
			 		(yyval.atri) = new Atributos();
			 		(yyval.atri->nodo) = new NodoJslt(tipo->REF_RAIZ, (yyvsp[0].cadena));	
 				}
#line 1676 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 178 "sintactico_jslt.y" /* yacc.c:1646  */
    {
		 		(yyval.atri) = new Atributos();
		 		(yyval.atri) = (yyvsp[-1].atri);
		 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->REF, (yyvsp[0].cadena)));	
 			}
#line 1686 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 184 "sintactico_jslt.y" /* yacc.c:1646  */
    {
		 		(yyval.atri) = new Atributos();
		 		(yyval.atri->nodo) = new NodoJslt(tipo->REFERENCIA, "referencia");
		 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->REF, (yyvsp[0].cadena)));
 		 	}
#line 1696 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 192 "sintactico_jslt.y" /* yacc.c:1646  */
    {
		 		(yyval.atri) = new Atributos();
		 		(yyval.atri) = (yyvsp[0].atri);
		 		(yyval.atri->nodo)->prepNodo(* (yyvsp[-1].atri->nodo));
 			}
#line 1706 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 198 "sintactico_jslt.y" /* yacc.c:1646  */
    {
		 		(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->ELEMENTS, "elementos");		 		
		 	}
#line 1715 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 205 "sintactico_jslt.y" /* yacc.c:1646  */
    { 
 		 		(yyval.atri) = new Atributos();
 		 		(yyval.atri) = (yyvsp[0].atri);
			}
#line 1724 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 210 "sintactico_jslt.y" /* yacc.c:1646  */
    { 
 		 		(yyval.atri) = new Atributos();
 		 		(yyval.atri) = (yyvsp[0].atri);
			}
#line 1733 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 215 "sintactico_jslt.y" /* yacc.c:1646  */
    { 
 		 		(yyval.atri) = new Atributos();
 		 		(yyval.atri) = (yyvsp[0].atri);
			}
#line 1742 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 220 "sintactico_jslt.y" /* yacc.c:1646  */
    { 
 		 		(yyval.atri) = new Atributos();
 		 		(yyval.atri) = (yyvsp[0].atri);
			}
#line 1751 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 225 "sintactico_jslt.y" /* yacc.c:1646  */
    { 
 		 		(yyval.atri) = new Atributos();
 		 		(yyval.atri) = (yyvsp[0].atri);
			}
#line 1760 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 230 "sintactico_jslt.y" /* yacc.c:1646  */
    { 
 		 		(yyval.atri) = new Atributos();
 		 		(yyval.atri) = (yyvsp[0].atri);
			}
#line 1769 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 235 "sintactico_jslt.y" /* yacc.c:1646  */
    { 
 		 		(yyval.atri) = new Atributos();
 		 		(yyval.atri) = (yyvsp[0].atri);
			}
#line 1778 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 240 "sintactico_jslt.y" /* yacc.c:1646  */
    { 
 		 		(yyval.atri) = new Atributos();
 		 		(yyval.atri) = (yyvsp[0].atri);
			}
#line 1787 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 247 "sintactico_jslt.y" /* yacc.c:1646  */
    {
	 		(yyval.atri) = new Atributos();
	 		(yyval.atri->nodo) = new NodoJslt(tipo->HTML, "html");
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_INICIO, (yyvsp[-2].cadena)));
	 		(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo));
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_FIN, (yyvsp[0].cadena)));
 		}
#line 1799 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 255 "sintactico_jslt.y" /* yacc.c:1646  */
    {
	 		(yyval.atri) = new Atributos();
	 		(yyval.atri->nodo) = new NodoJslt(tipo->HTML, "html");
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_INICIO, (yyvsp[-2].cadena)));
	 		(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo));
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_FIN, (yyvsp[0].cadena)));
 		}
#line 1811 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 263 "sintactico_jslt.y" /* yacc.c:1646  */
    {
	 		(yyval.atri) = new Atributos();
	 		(yyval.atri->nodo) = new NodoJslt(tipo->HTML, "html");
	 		char aux[1000];
	 		sprintf(aux, "%s %s", (yyvsp[-4].cadena), (yyvsp[-3].cadena));
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_INICIO, aux));
	 		(yyval.atri->nodo)->addNodo(* (yyvsp[-2].atri->nodo));
	 		sprintf(aux, "%s %s", (yyvsp[-1].cadena), (yyvsp[0].cadena));
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_FIN, aux)); 		
 		}
#line 1826 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 274 "sintactico_jslt.y" /* yacc.c:1646  */
    {
	 		(yyval.atri) = new Atributos();
	 		(yyval.atri->nodo) = new NodoJslt(tipo->HTML, "html");
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_INICIO, (yyvsp[-2].cadena)));
	 		(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo));
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_FIN, (yyvsp[0].cadena)));
 		}
#line 1838 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 282 "sintactico_jslt.y" /* yacc.c:1646  */
    {
	 		(yyval.atri) = new Atributos();
	 		(yyval.atri->nodo) = new NodoJslt(tipo->HTML, "html");
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_INICIO, (yyvsp[-2].cadena)));
	 		(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo));
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_FIN, (yyvsp[0].cadena)));
 		}
#line 1850 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 290 "sintactico_jslt.y" /* yacc.c:1646  */
    {
	 		(yyval.atri) = new Atributos();
	 		(yyval.atri->nodo) = new NodoJslt(tipo->HTML, "html");
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_INICIO, (yyvsp[-2].cadena)));
	 		(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo));
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_FIN, (yyvsp[0].cadena)));
 		}
#line 1862 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 298 "sintactico_jslt.y" /* yacc.c:1646  */
    {
	 		(yyval.atri) = new Atributos();
	 		(yyval.atri->nodo) = new NodoJslt(tipo->HTML, "html");
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_INICIO, (yyvsp[-2].cadena)));
	 		(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo));
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_FIN, (yyvsp[0].cadena)));
 		}
#line 1874 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 306 "sintactico_jslt.y" /* yacc.c:1646  */
    {
	 		(yyval.atri) = new Atributos();
	 		(yyval.atri->nodo) = new NodoJslt(tipo->HTML, "html");
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_INICIO, (yyvsp[-2].cadena)));
	 		(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo));
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_FIN, (yyvsp[0].cadena)));
 		}
#line 1886 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 314 "sintactico_jslt.y" /* yacc.c:1646  */
    {
	 		(yyval.atri) = new Atributos();
	 		(yyval.atri->nodo) = new NodoJslt(tipo->HTML, "html");
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_INICIO, (yyvsp[-2].cadena)));
	 		(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo));
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_FIN, (yyvsp[0].cadena)));
 		}
#line 1898 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 322 "sintactico_jslt.y" /* yacc.c:1646  */
    {
	 		(yyval.atri) = new Atributos();
	 		(yyval.atri->nodo) = new NodoJslt(tipo->HTML, "html");
	 		sprintf((yyvsp[-4].cadena), "%s %s %s", (yyvsp[-4].cadena), (yyvsp[-3].cadena), (yyvsp[-2].cadena));
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_INICIO, (yyvsp[-4].cadena)));
	 		(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo));
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_FIN, (yyvsp[0].cadena)));
 		}
#line 1911 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 331 "sintactico_jslt.y" /* yacc.c:1646  */
    {
	 		(yyval.atri) = new Atributos();
	 		(yyval.atri->nodo) = new NodoJslt(tipo->HTML, "html");
	 		sprintf((yyvsp[-4].cadena), "%s %s %s", (yyvsp[-4].cadena), (yyvsp[-3].cadena), (yyvsp[-2].cadena));
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_INICIO, (yyvsp[-4].cadena)));
	 		(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo));
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_FIN, (yyvsp[0].cadena)));
	 	}
#line 1924 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 340 "sintactico_jslt.y" /* yacc.c:1646  */
    {
	 		(yyval.atri) = new Atributos();
	 		(yyval.atri->nodo) = new NodoJslt(tipo->HTML, "html");
	 		sprintf((yyvsp[-4].cadena), "%s %s %s", (yyvsp[-4].cadena), (yyvsp[-3].cadena), (yyvsp[-2].cadena));
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_INICIO, (yyvsp[-4].cadena) ));
	 		(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo));
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_FIN, (yyvsp[0].cadena)));
 		}
#line 1937 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 349 "sintactico_jslt.y" /* yacc.c:1646  */
    {
	 		(yyval.atri) = new Atributos();
	 		(yyval.atri->nodo) = new NodoJslt(tipo->HTML, "html");
	 		sprintf((yyvsp[-4].cadena), "%s %s %s", (yyvsp[-4].cadena), (yyvsp[-3].cadena), (yyvsp[-2].cadena));
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_INICIO, (yyvsp[-4].cadena) ));
	 		(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo));
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_FIN, (yyvsp[0].cadena)));
 		}
#line 1950 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 358 "sintactico_jslt.y" /* yacc.c:1646  */
    {
	 		(yyval.atri) = new Atributos();
	 		(yyval.atri->nodo) = new NodoJslt(tipo->HTML, "html");
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_INICIO, (yyvsp[-2].cadena)));
	 		(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo));
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_FIN, (yyvsp[0].cadena)));		
	 	}
#line 1962 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 366 "sintactico_jslt.y" /* yacc.c:1646  */
    {
	 		(yyval.atri) = new Atributos();
	 		(yyval.atri->nodo) = new NodoJslt(tipo->HTML, "html");
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_INICIO, (yyvsp[-2].cadena)));
	 		(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo));
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_FIN, (yyvsp[0].cadena)));		
 		}
#line 1974 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 374 "sintactico_jslt.y" /* yacc.c:1646  */
    {
	 		(yyval.atri) = new Atributos();
	 		(yyval.atri->nodo) = new NodoJslt(tipo->HTML, "html");
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_INICIO, (yyvsp[-2].cadena)));
	 		(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo));
	 		(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ETQ_FIN, (yyvsp[0].cadena)));		
 		}
#line 1986 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 384 "sintactico_jslt.y" /* yacc.c:1646  */
    {
		 		(yyval.atri) = new Atributos();
		 		(yyval.atri) = (yyvsp[0].atri);
		 		(yyval.atri->nodo)->prepNodo(* (yyvsp[-1].atri->nodo)); 
		 	}
#line 1996 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 390 "sintactico_jslt.y" /* yacc.c:1646  */
    {
		 		(yyval.atri) = new Atributos();
		 		(yyval.atri) = (yyvsp[0].atri);
		 		(yyval.atri->nodo)->prepNodo(* new NodoJslt(tipo->TOKEN, (yyvsp[-1].cadena))); 
	 		}
#line 2006 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 396 "sintactico_jslt.y" /* yacc.c:1646  */
    {
		 		(yyval.atri) = new Atributos();
		 		(yyval.atri->nodo) = new NodoJslt(tipo->CONTENT, "contenido");
	 		}
#line 2015 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 404 "sintactico_jslt.y" /* yacc.c:1646  */
    {
 				(yyval.atri) = new Atributos();
 				(yyval.atri->nodo) = new NodoJslt(tipo->DECLARE, "declare");
 				(yyval.atri->nodo)->addNodo(* (yyvsp[-3].atri->nodo) );
 				(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ID, (yyvsp[-1].cadena)));
 			}
#line 2026 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 414 "sintactico_jslt.y" /* yacc.c:1646  */
    {
 				(yyval.atri) = new Atributos();
 				(yyval.atri->nodo) = new NodoJslt(tipo->ASIGNAR, "asignar");
 				(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ID, (yyvsp[-4].cadena)));
 				(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo)); 			
 			}
#line 2037 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 423 "sintactico_jslt.y" /* yacc.c:1646  */
    {
 				(yyval.atri) = new Atributos();
 				(yyval.atri->nodo) = new NodoJslt(tipo->APLICAR, "aplicar");
 				(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo)); 			
 			}
#line 2047 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 431 "sintactico_jslt.y" /* yacc.c:1646  */
    {
 				(yyval.atri) = new Atributos();
 				(yyval.atri->nodo) = new NodoJslt(tipo->GET_VALUE, "valor-de");
 				(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo)); 			
 			}
#line 2057 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 439 "sintactico_jslt.y" /* yacc.c:1646  */
    {
 				(yyval.atri) = new Atributos();
 				(yyval.atri->nodo) = new NodoJslt(tipo->FOR_EACH, "para-cada");
 				(yyval.atri->nodo)->addNodo(* (yyvsp[-3].atri->nodo));
 				(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo)); 			
 			}
#line 2068 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 448 "sintactico_jslt.y" /* yacc.c:1646  */
    {
 				(yyval.atri) = new Atributos();
 				(yyval.atri->nodo) = new NodoJslt(tipo->IF, "if");
 				(yyval.atri->nodo)->addNodo(* (yyvsp[-3].atri->nodo));
 				(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo)); 			
 			}
#line 2079 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 457 "sintactico_jslt.y" /* yacc.c:1646  */
    {
 				(yyval.atri) = new Atributos();
 				(yyval.atri->nodo) = new NodoJslt(tipo->SWITCH, "en-caso");
 				(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo)); 			
 			}
#line 2089 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 465 "sintactico_jslt.y" /* yacc.c:1646  */
    {
 			(yyval.atri) = new Atributos();
 			(yyval.atri) = (yyvsp[0].atri);
 			(yyval.atri->nodo)->prepNodo(* (yyvsp[-1].atri->nodo));
 		}
#line 2099 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 471 "sintactico_jslt.y" /* yacc.c:1646  */
    {
 			(yyval.atri) = new Atributos();
 			(yyval.atri->nodo) = new NodoJslt(tipo->CASES, "casos");
 			(yyval.atri->nodo)->addNodo(* (yyvsp[0].atri->nodo));
 		}
#line 2109 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 477 "sintactico_jslt.y" /* yacc.c:1646  */
    {
			(yyval.atri) = new Atributos();
 			(yyval.atri->nodo) = new NodoJslt(tipo->CASES, "casos");
 		}
#line 2118 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 484 "sintactico_jslt.y" /* yacc.c:1646  */
    {
 			(yyval.atri) = new Atributos();
 			(yyval.atri->nodo) = new NodoJslt(tipo->CASE, "de");
 			(yyval.atri->nodo)->addNodo(* (yyvsp[-3].atri->nodo));
 			(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo));
 		}
#line 2129 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 493 "sintactico_jslt.y" /* yacc.c:1646  */
    {
 			(yyval.atri) = new Atributos();
 			(yyval.atri->nodo) = new NodoJslt(tipo->OTHER, "cualquier-otro");
 			(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo));
 		}
#line 2139 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 501 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->REFERENCIA, "referencia");
 				(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->REF_ACTUAL, (yyvsp[0].cadena)));
 			}
#line 2149 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 507 "sintactico_jslt.y" /* yacc.c:1646  */
    {
 				(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->REFERENCIA, "referencia");
 				(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->REF_PADRE, (yyvsp[0].cadena)));
			}
#line 2159 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 513 "sintactico_jslt.y" /* yacc.c:1646  */
    {
 				(yyval.atri) = new Atributos();
 				(yyval.atri->nodo) = new NodoJslt(tipo->REF_PUNT, "refPuntero");
 				(yyval.atri->nodo)->addNodo(* (yyvsp[-3].atri->nodo));
 				(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo));
 			}
#line 2170 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 520 "sintactico_jslt.y" /* yacc.c:1646  */
    {
 				(yyval.atri) = new Atributos();
 				(yyval.atri) = (yyvsp[0].atri);
 			}
#line 2179 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 527 "sintactico_jslt.y" /* yacc.c:1646  */
    {
 				(yyval.atri) = new Atributos();
 				(yyval.atri) = (yyvsp[-1].atri);
 				(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->REF, (yyvsp[0].cadena)));
 			}
#line 2189 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 533 "sintactico_jslt.y" /* yacc.c:1646  */
    {
 				(yyval.atri) = new Atributos();
 				(yyval.atri) = (yyvsp[-1].atri);
 				(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->REFALL, (yyvsp[0].cadena)));
 			}
#line 2199 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 539 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->REFERENCIA, "referencia");
 				(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->REF, (yyvsp[0].cadena)));
 		 	}
#line 2209 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 545 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->REFERENCIA, "referencia");
 				(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->REF, (yyvsp[0].cadena)));
 			}
#line 2219 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 551 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->REFERENCIA, "referencia");
 				(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ID, (yyvsp[0].cadena)));
 			}
#line 2229 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 559 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri) = (yyvsp[0].atri); 				
 			}
#line 2238 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 566 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->OR, (yyvsp[-1].cadena));
				(yyval.atri->nodo)->addNodo(* (yyvsp[-2].atri->nodo)); 				
				(yyval.atri->nodo)->addNodo(* (yyvsp[0].atri->nodo)); 				
 			}
#line 2249 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 573 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->NOR, (yyvsp[-1].cadena));
				(yyval.atri->nodo)->addNodo(* (yyvsp[-2].atri->nodo)); 				
				(yyval.atri->nodo)->addNodo(* (yyvsp[0].atri->nodo)); 				
 			}
#line 2260 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 580 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->XOR, (yyvsp[-1].cadena));
				(yyval.atri->nodo)->addNodo(* (yyvsp[-2].atri->nodo)); 				
				(yyval.atri->nodo)->addNodo(* (yyvsp[0].atri->nodo)); 				
 			}
#line 2271 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 587 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->AND, (yyvsp[-1].cadena));
				(yyval.atri->nodo)->addNodo(* (yyvsp[-2].atri->nodo)); 				
				(yyval.atri->nodo)->addNodo(* (yyvsp[0].atri->nodo)); 				
 			}
#line 2282 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 594 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->NAND, (yyvsp[-1].cadena));
				(yyval.atri->nodo)->addNodo(* (yyvsp[-2].atri->nodo)); 				
				(yyval.atri->nodo)->addNodo(* (yyvsp[0].atri->nodo)); 				
 			}
#line 2293 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 601 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->NOT, (yyvsp[-1].cadena));
				(yyval.atri->nodo)->addNodo(* (yyvsp[0].atri->nodo)); 				
 			}
#line 2303 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 607 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri) = (yyvsp[0].atri);
 			}
#line 2312 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 614 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->EQUAL, (yyvsp[-1].cadena));
				(yyval.atri->nodo)->addNodo(* (yyvsp[-2].atri->nodo)); 				
				(yyval.atri->nodo)->addNodo(* (yyvsp[0].atri->nodo)); 				
 			}
#line 2323 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 621 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->NO_EQUAL, (yyvsp[-1].cadena));
				(yyval.atri->nodo)->addNodo(* (yyvsp[-2].atri->nodo)); 				
				(yyval.atri->nodo)->addNodo(* (yyvsp[0].atri->nodo)); 				
 			}
#line 2334 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 628 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->LESS_EQUAL, (yyvsp[-1].cadena));
				(yyval.atri->nodo)->addNodo(* (yyvsp[-2].atri->nodo)); 				
				(yyval.atri->nodo)->addNodo(* (yyvsp[0].atri->nodo)); 				
 			}
#line 2345 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 635 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->LESS, (yyvsp[-1].cadena));
				(yyval.atri->nodo)->addNodo(* (yyvsp[-2].atri->nodo)); 				
				(yyval.atri->nodo)->addNodo(* (yyvsp[0].atri->nodo)); 				
 			}
#line 2356 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 642 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->HIGHER, (yyvsp[-1].cadena));
				(yyval.atri->nodo)->addNodo(* (yyvsp[-2].atri->nodo)); 				
				(yyval.atri->nodo)->addNodo(* (yyvsp[0].atri->nodo)); 				
 			}
#line 2367 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 649 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->HIGHER_EQUAL, (yyvsp[-1].cadena));
				(yyval.atri->nodo)->addNodo(* (yyvsp[-2].atri->nodo)); 				
				(yyval.atri->nodo)->addNodo(* (yyvsp[0].atri->nodo)); 				
 			}
#line 2378 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 656 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri) = (yyvsp[0].atri);	
 			}
#line 2387 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 664 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->SUM, (yyvsp[-1].cadena));
				(yyval.atri->nodo)->addNodo(* (yyvsp[-2].atri->nodo)); 				
				(yyval.atri->nodo)->addNodo(* (yyvsp[0].atri->nodo)); 				
 			}
#line 2398 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 671 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->SUB, (yyvsp[-1].cadena));
				(yyval.atri->nodo)->addNodo(* (yyvsp[-2].atri->nodo)); 				
				(yyval.atri->nodo)->addNodo(* (yyvsp[0].atri->nodo)); 				
 			}
#line 2409 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 678 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->MUL, (yyvsp[-1].cadena));
				(yyval.atri->nodo)->addNodo(* (yyvsp[-2].atri->nodo)); 				
				(yyval.atri->nodo)->addNodo(* (yyvsp[0].atri->nodo)); 				
 			}
#line 2420 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 685 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->DIV, (yyvsp[-1].cadena));
				(yyval.atri->nodo)->addNodo(* (yyvsp[-2].atri->nodo)); 				
				(yyval.atri->nodo)->addNodo(* (yyvsp[0].atri->nodo)); 				
 			}
#line 2431 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 692 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->MOD, (yyvsp[-1].cadena));
				(yyval.atri->nodo)->addNodo(* (yyvsp[-2].atri->nodo)); 				
				(yyval.atri->nodo)->addNodo(* (yyvsp[0].atri->nodo)); 				
 			}
#line 2442 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 699 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->POW, (yyvsp[-1].cadena));
				(yyval.atri->nodo)->addNodo(* (yyvsp[-2].atri->nodo)); 				
				(yyval.atri->nodo)->addNodo(* (yyvsp[0].atri->nodo)); 				
 			}
#line 2453 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 706 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri) = (yyvsp[0].atri); 				
 			}
#line 2462 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 713 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri) = (yyvsp[-1].atri); 				
 			}
#line 2471 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 718 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->NOTHING, (yyvsp[-1].cadena));
				(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ID, (yyvsp[0].cadena))); 				
 			}
#line 2481 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 724 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->VARIETY_IZQ, "variacion-izq");
				(yyval.atri->nodo)->addNodo(* (yyvsp[-1].atri->nodo));
				(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ID, (yyvsp[0].cadena)));
		
 			}
#line 2493 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 732 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri->nodo) = new NodoJslt(tipo->VARIETY_DER, "variacion-der");
				(yyval.atri->nodo)->addNodo(* new NodoJslt(tipo->ID, (yyvsp[-1].cadena)));
				(yyval.atri->nodo)->addNodo(* (yyvsp[0].atri->nodo)); 				
 			}
#line 2504 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 739 "sintactico_jslt.y" /* yacc.c:1646  */
    {
				(yyval.atri) = new Atributos();
				(yyval.atri) = (yyvsp[0].atri); 				
 			}
#line 2513 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 746 "sintactico_jslt.y" /* yacc.c:1646  */
    { 
 				(yyval.atri) = new Atributos();
 				(yyval.atri->nodo) = new NodoJslt(tipo->INC, (yyvsp[0].cadena)); 
 			}
#line 2522 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 750 "sintactico_jslt.y" /* yacc.c:1646  */
    { 
 				(yyval.atri) = new Atributos();
 				(yyval.atri->nodo) = new NodoJslt(tipo->DEC, (yyvsp[0].cadena)); 
 			}
#line 2531 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 757 "sintactico_jslt.y" /* yacc.c:1646  */
    {
			(yyval.atri) = new Atributos();
			(yyval.atri->nodo) = new NodoJslt(tipo->ENTERO, (yyvsp[0].cadena)); 				
		}
#line 2540 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 762 "sintactico_jslt.y" /* yacc.c:1646  */
    {
			(yyval.atri) = new Atributos();
			(yyval.atri->nodo) = new NodoJslt(tipo->CARACTER, (yyvsp[0].cadena)); 				
		}
#line 2549 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 767 "sintactico_jslt.y" /* yacc.c:1646  */
    {
			(yyval.atri) = new Atributos();
			(yyval.atri->nodo) = new NodoJslt(tipo->CADENA, (yyvsp[0].cadena)); 				
		}
#line 2558 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 772 "sintactico_jslt.y" /* yacc.c:1646  */
    {
			(yyval.atri) = new Atributos();
			(yyval.atri->nodo) = new NodoJslt(tipo->FLOAT, (yyvsp[0].cadena)); 				
		}
#line 2567 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 777 "sintactico_jslt.y" /* yacc.c:1646  */
    {
			(yyval.atri) = new Atributos();
			(yyval.atri->nodo) = new NodoJslt(tipo->TRUE, (yyvsp[0].cadena)); 				
		}
#line 2576 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 782 "sintactico_jslt.y" /* yacc.c:1646  */
    {
			(yyval.atri) = new Atributos();
			(yyval.atri->nodo) = new NodoJslt(tipo->FALSE, (yyvsp[0].cadena)); 				
		}
#line 2585 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 787 "sintactico_jslt.y" /* yacc.c:1646  */
    {
			(yyval.atri) = new Atributos();
			(yyval.atri) = (yyvsp[0].atri); 				
		}
#line 2594 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 793 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2600 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 794 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2606 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 795 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2612 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 796 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2618 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 797 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2624 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 798 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2630 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 799 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2636 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 800 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2642 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 801 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2648 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 802 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2654 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 803 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2660 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 804 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2666 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 805 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2672 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 806 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2678 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 807 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2684 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 808 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2690 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 809 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2696 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 810 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2702 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 811 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2708 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 812 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2714 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 813 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2720 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 814 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2726 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 815 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2732 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 816 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2738 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 817 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2744 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 818 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2750 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 819 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2756 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 820 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2762 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 821 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2768 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 822 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2774 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 823 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2780 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 824 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2786 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 825 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2792 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 826 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2798 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 827 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2804 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 828 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2810 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 829 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2816 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 830 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2822 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 831 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2828 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 832 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2834 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 833 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2840 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 834 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2846 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 835 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2852 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 836 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2858 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 837 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2864 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 838 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2870 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 839 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2876 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 840 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2882 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 841 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2888 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 842 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2894 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 843 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2900 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 844 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2906 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 845 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2912 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 846 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2918 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 847 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", (yyvsp[0].cadena)); }
#line 2924 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 850 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s %s", (yyvsp[-1].cadena), (yyvsp[0].cadena)); }
#line 2930 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 851 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s", ""); }
#line 2936 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 854 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s=%s", (yyvsp[-2].cadena), (yyvsp[0].cadena)); }
#line 2942 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 855 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s=%s", (yyvsp[-2].cadena), (yyvsp[0].cadena)); }
#line 2948 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 856 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s=%s", (yyvsp[-2].cadena), (yyvsp[0].cadena)); }
#line 2954 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 857 "sintactico_jslt.y" /* yacc.c:1646  */
    { sprintf((yyval.cadena), "%s=%s", (yyvsp[-2].cadena), (yyvsp[0].cadena)); }
#line 2960 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 861 "sintactico_jslt.y" /* yacc.c:1646  */
    {
			(yyval.atri) = new Atributos();
			(yyval.atri->nodo) = new NodoJslt(tipo->ENTERO, (yyvsp[0].cadena));
		}
#line 2969 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 866 "sintactico_jslt.y" /* yacc.c:1646  */
    {
			(yyval.atri) = new Atributos();
			(yyval.atri->nodo) = new NodoJslt(tipo->CADENA, (yyvsp[0].cadena));
		}
#line 2978 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 871 "sintactico_jslt.y" /* yacc.c:1646  */
    {
			(yyval.atri) = new Atributos();
			(yyval.atri->nodo) = new NodoJslt(tipo->BOOLEAN, (yyvsp[0].cadena));
		}
#line 2987 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 876 "sintactico_jslt.y" /* yacc.c:1646  */
    {
			(yyval.atri) = new Atributos();
			(yyval.atri->nodo) = new NodoJslt(tipo->CARACTER, (yyvsp[0].cadena));
		}
#line 2996 "sintactico_jslt.cpp" /* yacc.c:1646  */
    break;


#line 3000 "sintactico_jslt.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 882 "sintactico_jslt.y" /* yacc.c:1906  */


void jsltinit(){
	jsltline = 1;
}

void jslterror(char *s)
{
  fprintf(stderr, "Error sintactico: %s", s);
}

NodoJslt * parsejslt(QString *entrada, QList<QString> *errores){
    YY_BUFFER_STATE bufferState = jslt_scan_string(entrada->toUtf8().constData());
    int estado = jsltparse();
    if(estado!=0){
        errores->append("Imposible recuperarse de los errores sintácticos en el archivo JSLT.");
    }
    jslt_delete_buffer(bufferState);
    return raiz;
}
