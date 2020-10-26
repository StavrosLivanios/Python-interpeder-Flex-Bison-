/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "myParser.y" /* yacc.c:339  */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//FUNCTIONS DECLARATION--------
int yylex();
void yyerror(char *);
int add_names(char*);
int check_name(char*);
int save_varables(int,char *,char*);
int typecast_of_value_to_int(char*);
int type_of_variable(char*);
float typecast_of_value_to_float(char*);
char* trim_first_last(char *);
char* value_of_variable(char*);
int istype(float);

extern FILE *yyin;
extern FILE *yyout;

//VARIABLES DECLARATION---------
int errorCount = 0;
extern int lineNumber;
int indent_level = 0 ;
char names[100][255];  
int count_names = 0 ;
int count_variables = 0 ;
char variable_name[100][255];
char variable_type [100][255];
char variable_value[100][255];
int typet = 0 ;
char* nameA ; 
char* valueA;
extern char *yytext;
int calc = 0 ;


#line 105 "myParser.tab.c" /* yacc.c:339  */

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
   by #include "myParser.tab.h".  */
#ifndef YY_YY_MYPARSER_TAB_H_INCLUDED
# define YY_YY_MYPARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    START_PAR = 258,
    STOP_PAR = 259,
    START_BRAC = 260,
    STOP_BRAC = 261,
    COMMA = 262,
    STAR = 263,
    FROM = 264,
    IMPORT = 265,
    AS = 266,
    NAME = 267,
    DOT = 268,
    INT = 269,
    FLOAT = 270,
    EQUAL = 271,
    BOOLEAN = 272,
    LESSER = 273,
    GREATER = 274,
    NOT_EQUAL = 275,
    IS = 276,
    NOT = 277,
    IN = 278,
    PLUS = 279,
    MINUS = 280,
    AT = 281,
    FORWARD_SLASH = 282,
    BACKSLASH = 283,
    PERCENT = 284,
    TILDE = 285,
    AWAIT = 286,
    FOR = 287,
    LAMBDA = 288,
    ASYNC = 289,
    COLON = 290,
    IF = 291,
    ELSE = 292,
    ELSEIF = 293,
    OR = 294,
    AND = 295,
    YIELD = 296,
    VERTICAL_LINE = 297,
    POWER = 298,
    AMPERSAND = 299,
    START_CURLY = 300,
    STOP_CURLY = 301,
    DEF = 302,
    CLASS = 303,
    NEWLINE = 304,
    INDENT = 305,
    DEDENT = 306,
    DEF_INIT = 307,
    SELF = 308,
    END = 309,
    STRING = 310,
    XOR = 311,
    PRINT = 312
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 41 "myParser.y" /* yacc.c:355  */
 
        int num;              /*  integer value */
        float fp;               /* floating point value */
        char* str;              /* Ptr to  string  */


#line 210 "myParser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 227 "myParser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   393

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  168
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  279

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

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
      55,    56,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   127,   127,   128,   129,   130,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   155,   157,
     157,   159,   159,   161,   162,   164,   165,   166,   169,   170,
     171,   174,   174,   174,   174,   174,   175,   175,   175,   175,
     175,   175,   175,   175,   181,   181,   182,   182,   183,   183,
     184,   184,   185,   185,   186,   186,   187,   187,   188,   191,
     192,   193,   194,   204,   204,   206,   207,   209,   209,   211,
     211,   212,   212,   214,   215,   226,   226,   229,   229,   229,
     233,   234,   237,   238,   239,   240,   241,   244,   244,   244,
     244,   246,   247,   248,   248,   251,   251,   251,   251,   262,
     270,   271,   274,   282,   283,   284,   285,   286,   288,   289,
     290,   291,   292,   293,   294,   295,   297,   298,   299,   300,
     301,   302,   303,   304,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   326,
     327,   328,   329,   330,   331,   342,   343,   344,   345,   349,
     350,   353,   354,   357,   358,   359,   362,   363,   366,   367,
     377,   378,   378,   380,   382,   382,   383,   384,   386
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "START_PAR", "STOP_PAR", "START_BRAC",
  "STOP_BRAC", "COMMA", "STAR", "FROM", "IMPORT", "AS", "NAME", "DOT",
  "INT", "FLOAT", "EQUAL", "BOOLEAN", "LESSER", "GREATER", "NOT_EQUAL",
  "IS", "NOT", "IN", "PLUS", "MINUS", "AT", "FORWARD_SLASH", "BACKSLASH",
  "PERCENT", "TILDE", "AWAIT", "FOR", "LAMBDA", "ASYNC", "COLON", "IF",
  "ELSE", "ELSEIF", "OR", "AND", "YIELD", "VERTICAL_LINE", "POWER",
  "AMPERSAND", "START_CURLY", "STOP_CURLY", "DEF", "CLASS", "NEWLINE",
  "INDENT", "DEDENT", "DEF_INIT", "SELF", "END", "STRING", "XOR", "PRINT",
  "$accept", "programm", "rule", "for_stm", "function", "$@1",
  "function_const", "if_stmt", "el_stmnt", "conditional_expression",
  "cond_sign", "print", "$@2", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8",
  "print_exp", "class", "$@9", "constructor", "constructor_content",
  "call", "$@10", "$@11", "to_call", "assignment_stmt", "$@12",
  "after_expression", "target_list", "target", "primary", "list",
  "list_content", "literal", "calculation", "calc_var", "calc_float",
  "calc_int", "import_stmt", "mult_dot", "Module", "relative_module",
  "module_rec", "Namespace", "suite", "suite_content", "suite_class",
  "class_content", "identifier", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

#define YYPACT_NINF -161

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-161)))

#define YYTABLE_NINF -169

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -161,   206,  -161,    46,    82,    42,    82,    70,    82,    97,
    -161,  -161,  -161,    16,  -161,  -161,  -161,  -161,    -6,  -161,
      27,   111,  -161,   133,   115,   105,  -161,    98,    82,  -161,
     109,   107,   121,   129,   163,   149,    70,   122,  -161,  -161,
    -161,  -161,   201,  -161,   161,  -161,  -161,  -161,  -161,  -161,
     112,  -161,  -161,  -161,  -161,  -161,  -161,   160,    19,    19,
    -161,  -161,    15,  -161,  -161,   130,    82,    82,  -161,  -161,
      35,    90,   312,  -161,   172,   185,   189,   192,   196,   197,
     205,   191,  -161,   176,  -161,  -161,  -161,    70,   231,   200,
     374,  -161,    18,   242,   331,   243,  -161,  -161,   339,   345,
     349,   156,  -161,   161,   245,   108,    82,  -161,   121,  -161,
    -161,   249,   255,  -161,   380,   357,  -161,   260,   264,  -161,
     227,    70,  -161,     6,  -161,  -161,  -161,  -161,  -161,  -161,
     223,    59,   312,    82,   229,  -161,  -161,  -161,   268,   275,
     313,   256,   283,   287,   256,   292,   294,   299,   374,   374,
     374,   374,   374,   374,   374,   374,   374,   374,   374,   374,
    -161,  -161,  -161,   121,  -161,    82,    35,  -161,   156,   176,
      14,  -161,   272,   279,    70,  -161,   303,   320,  -161,   286,
    -161,  -161,  -161,  -161,     1,    20,  -161,  -161,    47,  -161,
    -161,  -161,  -161,  -161,  -161,    71,    91,   104,    71,    91,
     104,  -161,  -161,  -161,  -161,  -161,  -161,    71,    91,   104,
      71,    91,   104,  -161,  -161,  -161,  -161,  -161,  -161,    71,
      91,   104,    71,    91,   104,  -161,  -161,  -161,  -161,   249,
     121,  -161,  -161,  -161,  -161,  -161,   258,   176,   210,   306,
      82,   314,  -161,  -161,  -161,     5,  -161,   203,  -161,  -161,
    -161,  -161,   176,   176,  -161,    34,  -161,  -161,   265,  -161,
    -161,  -161,    59,  -161,   307,  -161,  -161,  -161,  -161,   289,
     281,   308,    82,   176,   282,  -161,   309,   176,  -161
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,   168,     0,     0,     0,     0,
       3,    86,     4,     0,     5,    12,    10,    11,     0,     9,
       0,     0,    75,    81,     0,    85,   168,   149,   155,   154,
       0,   151,   158,     0,     0,     0,     0,     0,    95,    96,
      98,    97,     0,    90,    87,    30,    89,    88,    19,    63,
       0,    16,    17,     8,    15,     6,    13,     0,     0,     0,
       7,    14,     0,   150,   153,     0,     0,     0,   156,    71,
       0,     0,     0,    92,     0,    94,     0,    31,    32,     0,
      37,     0,    39,     0,    42,    41,    43,     0,     0,     0,
       0,    58,   102,   139,    96,    44,    54,    56,    99,   100,
     101,     0,    80,    82,     0,     0,     0,   148,   158,   152,
     159,   145,     0,    74,   102,    95,    70,     0,    78,    79,
       0,     0,    91,     0,    35,    33,    34,    36,    38,    40,
       0,    24,    28,    21,     0,   102,   139,   124,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,    84,    83,   158,   156,     0,     0,    73,     0,     0,
       0,    93,     0,     0,     0,    23,     0,    22,    67,     0,
      64,   107,   129,   144,     0,     0,    49,    53,     0,    51,
      55,    57,   105,   118,   114,   103,   116,   112,   104,   117,
     113,   106,   119,   115,   122,   127,   136,   120,   125,   134,
     121,   126,   135,   123,   128,   137,   110,   132,   142,   108,
     130,   140,   109,   131,   141,   111,   133,   138,   156,   146,
     158,    72,    77,    18,    29,   161,     0,     0,     0,     0,
       0,     0,    61,    62,    47,     0,    45,     0,   157,   160,
     162,    27,     0,     0,    68,     0,   164,   166,     0,    59,
      60,   147,    26,    20,     0,   163,   165,   167,    25,     0,
       0,     0,     0,     0,     0,    66,     0,     0,    65
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -161,  -161,  -158,  -161,  -161,  -161,  -161,  -161,    83,   -30,
     276,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,   215,
    -161,  -161,    96,    77,     3,  -161,  -161,   194,  -161,  -161,
     -94,   317,     7,   -60,  -161,   257,   -22,   328,    -1,    32,
      45,  -161,   352,    -2,  -161,  -148,   -96,  -160,  -161,  -161,
    -161,    -3
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    14,    15,    16,    88,   176,    17,   175,    42,
      87,    18,   144,   141,   142,   145,   143,   146,   147,   185,
      19,    89,   257,   177,    43,    34,   112,   116,    21,    57,
     117,    22,    44,    45,    46,    74,    47,   119,    98,    99,
     100,    24,    28,    29,    30,   111,    68,   131,   236,   180,
     258,    25
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      31,    31,    32,    35,    20,    48,    72,   160,    23,   233,
     118,   120,   164,   242,   235,    75,   229,   259,   234,    50,
      38,    39,   -48,    40,   244,    31,    64,    26,    96,   104,
      76,    26,    77,    78,    79,    80,    81,    82,    90,   113,
      37,   118,   -46,    51,   245,   -69,    26,   114,    52,   115,
      94,   246,    40,    84,    85,    33,   243,   132,    26,    27,
     260,    41,   108,   109,   110,    23,   103,   228,    11,   105,
      86,   245,    11,    36,   232,    37,    53,   251,   250,   148,
     247,    54,     5,   256,    38,    39,   264,    40,    11,   138,
      41,   170,   262,   263,    26,    37,   173,   174,   151,   152,
     266,    75,     5,   163,    38,    39,   118,    40,   118,    49,
      62,    27,   156,   275,   162,    90,    91,   278,   155,    65,
      66,    59,   139,    11,    92,    41,    93,    94,    73,    40,
     178,   159,    67,   106,   248,   140,    38,    39,   107,    40,
      58,    69,    26,    11,   238,    41,    59,   192,   195,   198,
     201,   204,   207,   210,   213,   216,   219,   222,   225,    90,
      55,    37,    31,   230,    60,    56,    70,    95,   114,    61,
     115,    94,    71,    40,    59,    20,   101,    41,   122,    23,
     193,   196,   199,   202,   205,   208,   211,   214,   217,   220,
     223,   226,   123,   194,   197,   200,   203,   206,   209,   212,
     215,   218,   221,   224,   227,   124,     2,   261,   125,    11,
     165,    41,   126,   127,   129,     3,     4,    76,     5,    77,
      78,    79,    80,    81,    82,   130,    76,   128,    77,    78,
      79,    80,    81,    82,   133,   134,    83,   254,     6,    20,
      84,    85,     7,    23,    20,   252,   -52,   -50,    23,    84,
      85,   161,    48,     8,     9,    10,   165,    86,   166,    11,
      12,    20,   169,    13,   167,    23,    86,     3,     4,   178,
       5,   168,   181,   172,     3,     4,   148,     5,   179,   182,
     184,     3,     4,   152,     5,   271,   276,   186,   272,   240,
       6,   187,   149,   150,     7,   151,   189,     6,   190,   153,
     154,     7,   155,   191,     6,     8,     9,   239,     7,   249,
     269,    11,   255,     9,   237,    13,   265,   183,    11,     8,
       9,   156,    13,     3,     4,    11,     5,   240,    76,    13,
      77,    78,    79,    80,    81,    82,   241,   157,   158,  -124,
     159,   253,   270,   273,   277,   268,     6,   148,   121,   274,
       7,    84,    85,   152,   267,  -124,  -124,   156,  -124,   188,
     231,   255,     9,   149,   150,  -139,   151,    11,    86,   153,
     154,    13,   155,   157,   158,   102,   159,    90,    97,    63,
     171,  -139,  -139,   -69,  -139,  -168,   135,  -168,   136,   137,
       0,     0,     0,    33
};

static const yytype_int16 yycheck[] =
{
       3,     4,     4,     6,     1,     8,    36,   101,     1,   169,
      70,    71,   108,    12,   172,    37,   164,    12,     4,     3,
      14,    15,     4,    17,     4,    28,    28,    12,    50,    14,
      16,    12,    18,    19,    20,    21,    22,    23,     3,     4,
       5,   101,    24,    49,    24,     3,    12,    12,    54,    14,
      15,     4,    17,    39,    40,    13,    55,    87,    12,    13,
      55,    55,    65,    66,    67,    58,    59,   163,    53,    62,
      56,    24,    53,     3,   168,     5,    49,   237,   236,     8,
     228,    54,    12,   241,    14,    15,    52,    17,    53,    90,
      55,   121,   252,   253,    12,     5,    37,    38,    27,     8,
     258,   123,    12,   106,    14,    15,   166,    17,   168,    12,
       5,    13,     8,   273,     6,     3,     4,   277,    27,    10,
      13,    13,    90,    53,    12,    55,    14,    15,     6,    17,
     133,    27,    11,     3,   230,    90,    14,    15,     8,    17,
       7,    12,    12,    53,   174,    55,    13,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,     3,
      49,     5,   165,   165,    49,    54,     3,    55,    12,    54,
      14,    15,    23,    17,    13,   172,    16,    55,     6,   172,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,     7,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,    16,     0,     4,    16,    53,
       7,    55,    16,    16,    23,     9,    10,    16,    12,    18,
      19,    20,    21,    22,    23,    49,    16,    22,    18,    19,
      20,    21,    22,    23,     3,    35,    35,   240,    32,   236,
      39,    40,    36,   236,   241,    35,     4,     4,   241,    39,
      40,     6,   255,    47,    48,    49,     7,    56,     3,    53,
      54,   258,    35,    57,     4,   258,    56,     9,    10,   272,
      12,     7,     4,    50,     9,    10,     8,    12,    49,     4,
      24,     9,    10,     8,    12,     4,     4,     4,     7,     7,
      32,     4,    24,    25,    36,    27,     4,    32,     4,    24,
      25,    36,    27,     4,    32,    47,    48,     4,    36,    51,
       3,    53,    47,    48,    35,    57,    51,     4,    53,    47,
      48,     8,    57,     9,    10,    53,    12,     7,    16,    57,
      18,    19,    20,    21,    22,    23,    50,    24,    25,     8,
      27,    35,    53,    35,    35,   262,    32,     8,    72,   272,
      36,    39,    40,     8,   258,    24,    25,     8,    27,   144,
     166,    47,    48,    24,    25,     8,    27,    53,    56,    24,
      25,    57,    27,    24,    25,    58,    27,     3,    50,    27,
     123,    24,    25,     3,    27,     5,    12,     7,    14,    15,
      -1,    -1,    -1,    13
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    59,     0,     9,    10,    12,    32,    36,    47,    48,
      49,    53,    54,    57,    60,    61,    62,    65,    69,    78,
      82,    86,    89,    90,    99,   109,    12,    13,   100,   101,
     102,   109,   101,    13,    83,   109,     3,     5,    14,    15,
      17,    55,    67,    82,    90,    91,    92,    94,   109,    12,
       3,    49,    54,    49,    54,    49,    54,    87,     7,    13,
      49,    54,     5,   100,   101,    10,    13,    11,   104,    12,
       3,    23,    67,     6,    93,    94,    16,    18,    19,    20,
      21,    22,    23,    35,    39,    40,    56,    68,    63,    79,
       3,     4,    12,    14,    15,    55,    94,    95,    96,    97,
      98,    16,    89,    90,    14,    90,     3,     8,   109,   109,
     109,   103,    84,     4,    12,    14,    85,    88,    91,    95,
      91,    68,     6,     7,    16,    16,    16,    16,    22,    23,
      49,   105,    67,     3,    35,    12,    14,    15,    96,    97,
      98,    71,    72,    74,    70,    73,    75,    76,     8,    24,
      25,    27,     8,    24,    25,    27,     8,    24,    25,    27,
      88,     6,     6,   109,   104,     7,     3,     4,     7,    35,
      67,    93,    50,    37,    38,    66,    64,    81,   109,    49,
     107,     4,     4,     4,    24,    77,     4,     4,    77,     4,
       4,     4,    96,    97,    98,    96,    97,    98,    96,    97,
      98,    96,    97,    98,    96,    97,    98,    96,    97,    98,
      96,    97,    98,    96,    97,    98,    96,    97,    98,    96,
      97,    98,    96,    97,    98,    96,    97,    98,   104,   103,
     101,    85,    88,   105,     4,    60,   106,    35,    67,     4,
       7,    50,    12,    55,     4,    24,     4,   103,   104,    51,
      60,   105,    35,    35,   109,    47,    60,    80,   108,    12,
      55,     4,   105,   105,    52,    51,    60,    80,    66,     3,
      53,     4,     7,    35,    81,   105,     4,    35,   105
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    59,    59,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    61,    63,
      62,    64,    64,    65,    65,    66,    66,    66,    67,    67,
      67,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    70,    69,    71,    69,    72,    69,
      73,    69,    74,    69,    75,    69,    76,    69,    69,    77,
      77,    77,    77,    79,    78,    80,    80,    81,    81,    83,
      82,    84,    82,    85,    85,    87,    86,    88,    88,    88,
      89,    89,    90,    90,    90,    90,    90,    91,    91,    91,
      91,    92,    92,    93,    93,    94,    94,    94,    94,    95,
      95,    95,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    98,
      98,    98,    98,    98,    98,    99,    99,    99,    99,   100,
     100,   101,   101,   102,   102,   102,   103,   103,   104,   104,
     105,   106,   106,   107,   108,   108,   108,   108,   109
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     2,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     6,     0,
       8,     0,     1,     5,     4,     5,     4,     3,     3,     5,
       1,     1,     1,     2,     2,     2,     2,     1,     2,     1,
       2,     1,     1,     1,     0,     6,     0,     6,     0,     5,
       0,     5,     0,     5,     0,     5,     0,     5,     3,     3,
       3,     2,     2,     0,     5,     9,     7,     1,     3,     0,
       4,     0,     6,     2,     1,     0,     4,     3,     1,     1,
       3,     1,     3,     4,     4,     1,     1,     1,     1,     1,
       1,     3,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     3,     3,     3,     4,     6,     8,     4,     1,
       2,     1,     3,     2,     1,     1,     0,     4,     0,     2,
       4,     1,     2,     4,     1,     2,     1,     2,     1
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
        case 19:
#line 157 "myParser.y" /* yacc.c:1646  */
    {add_names(yylval.str);}
#line 1536 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 181 "myParser.y" /* yacc.c:1646  */
    {printf( trim_first_last(yylval.str));}
#line 1542 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 181 "myParser.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1548 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 182 "myParser.y" /* yacc.c:1646  */
    {printf(value_of_variable(yylval.str));}
#line 1554 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 182 "myParser.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1560 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 183 "myParser.y" /* yacc.c:1646  */
    {printf(value_of_variable(yylval.str));printf("\n");}
#line 1566 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 184 "myParser.y" /* yacc.c:1646  */
    {printf( trim_first_last(yylval.str));printf("\n");}
#line 1572 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 185 "myParser.y" /* yacc.c:1646  */
    {printf("%d",yylval.num);printf("\n");}
#line 1578 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 186 "myParser.y" /* yacc.c:1646  */
    {printf("%s",yylval.str);printf("\n");}
#line 1584 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 187 "myParser.y" /* yacc.c:1646  */
    {printf("%s",yylval.str);printf("\n");}
#line 1590 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 191 "myParser.y" /* yacc.c:1646  */
    {printf(value_of_variable(yylval.str));}
#line 1596 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 192 "myParser.y" /* yacc.c:1646  */
    {printf( trim_first_last(yylval.str));}
#line 1602 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 193 "myParser.y" /* yacc.c:1646  */
    {printf(value_of_variable(yylval.str));}
#line 1608 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 194 "myParser.y" /* yacc.c:1646  */
    {printf( trim_first_last(yylval.str));}
#line 1614 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 204 "myParser.y" /* yacc.c:1646  */
    {add_names(yylval.str);}
#line 1620 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 211 "myParser.y" /* yacc.c:1646  */
    {check_name(yylval.str); }
#line 1626 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 212 "myParser.y" /* yacc.c:1646  */
    {check_name(yylval.str); }
#line 1632 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 226 "myParser.y" /* yacc.c:1646  */
    { nameA = yylval.str;}
#line 1638 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 226 "myParser.y" /* yacc.c:1646  */
    { save_varables(typet,nameA,yylval.str);}
#line 1644 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 251 "myParser.y" /* yacc.c:1646  */
    {typet = 1;sprintf(yylval.str, "%d", (yyvsp[0].num));}
#line 1650 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 251 "myParser.y" /* yacc.c:1646  */
    {typet=3;}
#line 1656 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 251 "myParser.y" /* yacc.c:1646  */
    {typet = 2;}
#line 1662 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 251 "myParser.y" /* yacc.c:1646  */
    {typet = 4;}
#line 1668 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 262 "myParser.y" /* yacc.c:1646  */
    {  if(typet==1)
					     {
					        sprintf(yylval.str, "%d", (int)(yyvsp[0].fp));
					     } 
                         else if(typet==3){ 
							sprintf(yylval.str, "%f", (yyvsp[0].fp));
						 }
					  }
#line 1681 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 270 "myParser.y" /* yacc.c:1646  */
    { sprintf(yylval.str, "%f", (yyvsp[0].fp));}
#line 1687 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 271 "myParser.y" /* yacc.c:1646  */
    {sprintf(yylval.str, "%d", (yyvsp[0].num));}
#line 1693 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 274 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = atof(value_of_variable((yyvsp[0].str)));
				 if(type_of_variable((yyvsp[0].str))== 2 || type_of_variable((yyvsp[0].str))== 4 )
				 {
				 printf("\nError in line %d value is not a number\n",lineNumber);
				 errorCount++;
				 }
                 typet=type_of_variable((yyvsp[0].str)); }
#line 1705 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 282 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].fp) + (yyvsp[0].fp); typet= istype((yyval.fp));}
#line 1711 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 283 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].fp) - (yyvsp[0].fp); typet=istype((yyval.fp));;}
#line 1717 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 284 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].fp) * (yyvsp[0].fp); typet=istype((yyval.fp));}
#line 1723 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 285 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].fp) / (yyvsp[0].fp); typet=istype((yyval.fp));}
#line 1729 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 286 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-1].fp); typet=istype((yyval.fp));}
#line 1735 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 288 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].num) + (yyvsp[0].fp); typet= istype((yyval.fp));}
#line 1741 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 289 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].num) - (yyvsp[0].fp); typet= istype((yyval.fp));}
#line 1747 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 290 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].num) * (yyvsp[0].fp); typet= istype((yyval.fp));}
#line 1753 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 291 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].num) / (yyvsp[0].fp); typet= istype((yyval.fp));}
#line 1759 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 292 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].fp) + (yyvsp[0].num); typet= istype((yyval.fp));}
#line 1765 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 293 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].fp) - (yyvsp[0].num); typet= istype((yyval.fp));}
#line 1771 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 294 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].fp) * (yyvsp[0].num); typet= istype((yyval.fp));}
#line 1777 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 295 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].fp) / (yyvsp[0].num); typet=3;}
#line 1783 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 297 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].fp) + (yyvsp[0].fp); typet=3;}
#line 1789 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 298 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].fp) - (yyvsp[0].fp); typet=3;}
#line 1795 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 299 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].fp) * (yyvsp[0].fp); typet=3;}
#line 1801 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 300 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].fp) / (yyvsp[0].fp); typet=3;}
#line 1807 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 301 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].fp) + (yyvsp[0].fp); typet=3;}
#line 1813 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 302 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].fp) - (yyvsp[0].fp); typet=3;}
#line 1819 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 303 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].fp) * (yyvsp[0].fp); typet=3;}
#line 1825 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 304 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].fp) / (yyvsp[0].fp); typet=3;}
#line 1831 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 309 "myParser.y" /* yacc.c:1646  */
    {yylval.fp=atof(yylval.str);(yyval.fp)=yylval.fp; typet=3;}
#line 1837 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 310 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].fp) + (yyvsp[0].fp); typet=3;}
#line 1843 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 311 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].fp) - (yyvsp[0].fp); typet=3;}
#line 1849 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 312 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].fp) * (yyvsp[0].fp); typet=3;}
#line 1855 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 313 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].fp) / (yyvsp[0].fp); typet=3;}
#line 1861 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 314 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-1].fp); typet=3;}
#line 1867 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 315 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].num) + (yyvsp[0].fp); typet=3;}
#line 1873 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 316 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].num) - (yyvsp[0].fp); typet=3;}
#line 1879 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 317 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].num) * (yyvsp[0].fp); typet=3;}
#line 1885 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 318 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].num) / (yyvsp[0].fp); typet=3;}
#line 1891 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 319 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].fp) + (yyvsp[0].num); typet=3;}
#line 1897 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 320 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].fp) - (yyvsp[0].num); typet=3;}
#line 1903 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 321 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].fp) * (yyvsp[0].num); }
#line 1909 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 322 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].fp) / (yyvsp[0].num); typet=3;}
#line 1915 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 323 "myParser.y" /* yacc.c:1646  */
    { (yyval.fp) = (yyvsp[-2].num) / (float)(yyvsp[0].num); typet=3;}
#line 1921 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 326 "myParser.y" /* yacc.c:1646  */
    {(yyval.num)=(yyvsp[0].num); typet = 1;}
#line 1927 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 327 "myParser.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[-2].num) + (yyvsp[0].num); }
#line 1933 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 328 "myParser.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[-2].num) - (yyvsp[0].num); }
#line 1939 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 329 "myParser.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[-2].num) * (yyvsp[0].num); }
#line 1945 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 330 "myParser.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[-2].num) * (yyvsp[0].num); }
#line 1951 "myParser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 331 "myParser.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[-1].num); }
#line 1957 "myParser.tab.c" /* yacc.c:1646  */
    break;


#line 1961 "myParser.tab.c" /* yacc.c:1646  */
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
#line 390 "myParser.y" /* yacc.c:1906  */


int main(int argc, const char **argv)
{
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
    } else {
        yyin = stdin;
    }

    int result;

    if ((result = yyparse()) == 0 && errorCount == 0) { //CHECKING IF  AN ERROR OCCUR WHILE PARSING THE CODE  
        printf("No parsing errors detected \n");
    } else if(errorCount==1) {
        printf("\n %d error found \n",errorCount); // WE SAVE THE NUMBER OF ERRORS ON THE VARIABLE ERRORCOUNT
    } else{
	    printf("\n  %d errors found \n",errorCount);
    }
	
    return 0;

}

//===============================================================================
//===============================================================================

//BISON'S FUNCTION 
void yyerror (char *s)// THIS FUNCTION IS CALLED WHEN A PARSING ERROR OCCUR. WE PRINT THE LINE THAT THE ERROR OCCURED 
{
    errorCount++;
	//printf("\n%d ",errorCount);
    fprintf(stderr,"%s in line %d \n", s, lineNumber); 
}

//===============================================================================
//===============================================================================

//WE CHECK IF THE NAME OF SAVED FUNCTION OR CLASS EXISTS 
int check_name(char* x) 
{
   for(int i =0; i<count_names; i++)
   {

      if(strcmp(x,names[i])==0){
	     return 0; 
      }
   }
   
   printf("\nError in line %d undetified  name: %s\n",lineNumber, x);
   errorCount++;
   return 0 ;
}

//===============================================================================
//===============================================================================

//WE ADD THE NAME OF A FUNCHION OR CLASS IN AN ARRAY(names[]) TO BE ABLE TO CHECK ON FUNCTION OR CLASS CALLINGS 
int add_names(char* x)
{


   for(int i =0; i<count_names ; i++)
   {

      if(strcmp(x,names[i])==0){printf("\nError in line %d name already exsists\n",lineNumber); errorCount++; return 0;} 
   }
   strcpy(names[count_names],x);
   
   count_names++;
   return 0;
}

//===============================================================================
//===============================================================================

//ADD THE NAME AN VALUE OF VARIABLES TO A THREE ARRAY SYSTEM (variable_name[]<-- STORES THE NAME OF THE VARIABLE | variable_value[]<-- STORES THE VALUE OF THE VARIABLE
// | variable_type[]<-- STORES THE TYPE OF THE VALUE)
int save_varables(int type, char * name, char* value){

	//CHECKS IF VARIABLE EXISTS TO UPDATE IT
   if(count_variables>0)
   {
     for(int i = 0; i<count_variables; i++)
	 {
	    if(strcmp(name, variable_name[i]) == 0 ){
		    if(type == 1)
			{
				strcpy(variable_type[i],"int");
	
			}
			else if(type == 2)
			{
				strcpy(variable_type[i],"string");
			}
			else if(type == 3)
            {
                strcpy(variable_type[i],"float");
            }
            else if(type == 4)
            {
                strcpy(variable_type[i],"boolean");
            }
			
		 if(type==2){strcpy( variable_value[i],trim_first_last(value));}
		 else{strcpy( variable_value[i],value);}
		 printf("\ntype: %s, name: %s, value: %s, count: %d\n",variable_type[i],variable_name[i],variable_value[i],count_variables);
		 return 0 ;
	    }
	 }
   }
 
 if(type == 1)
 {

	 strcpy(variable_type[count_variables],"int");
	
 }
 else if(type == 2)
 {
     strcpy(variable_type[count_variables],"string");
 }
  else if(type == 3)
 {
     strcpy(variable_type[count_variables],"float");
 }
  else if(type == 4)
 {
     strcpy(variable_type[count_variables],"boolean");
 }

 strcpy(variable_name[count_variables],name);
 
 if(type==2){strcpy( variable_value[count_variables],trim_first_last(value));}
 else{strcpy( variable_value[count_variables],value);}

  printf("\ntype: %s, name: %s, value: %s, count: %d\n",variable_type[count_variables],variable_name[count_variables],variable_value[count_variables],count_variables);
 count_variables++;
 return 0 ;
}

//===============================================================================
//===============================================================================

//MAKES THE STRING VALUE TO INT FOR PROCCESING
int typecast_of_value_to_int(char* value){

   int val = atoi(value);
   
   return val ;

}

//===============================================================================
//===============================================================================

//MAKES THE STRING VALUE TO FLOAT FOR PROCCESING
float typecast_of_value_to_float(char* value){
  
  float val = atof(value);
   
   return val ;


}

//===============================================================================
//===============================================================================+

//GIVEN A NAME RETURNS THE VALUE OF THE SPECIFIC VARIABLE  
 char* value_of_variable(char* name ){
	int found = 0 ;
	for(int i = 0; i<count_variables; i++)
	 {
	    if(strcmp(name, variable_name[i]) == 0 ){
		found=1;
		 return variable_value[i];
		}
	 }
	 if (found == 0){
	  printf("\nError in line %d no value in variable\n",lineNumber);
	  errorCount++;
	  return "";
	 }
 }

//===============================================================================
//===============================================================================

//GIVEN A NAME RETURNS THE TYPE OF THE SPECIFIC VARIABLE 
int type_of_variable(char* name ){
	int found = 0 ;
	for(int i = 0; i<count_variables; i++)
	 {
	    if(strcmp(name, variable_name[i]) == 0 ){
		found=1;
		
		  if(strcmp(variable_type[i], "int")==0){return 1;}
		  else if(strcmp(variable_type[i], "float")==0){return 3;}
		  else if(strcmp(variable_type[i], "string")==0){return 2;}
		  else if(strcmp(variable_type[i], "boolean")==0){return 4;}
		}
	 }
	 if (found == 0){
	  //printf("\nError in line %d no value in variable\n",lineNumber);
	  //errorCount++;
	  return 0;
	 }
 }

//===============================================================================
//===============================================================================

//GIVEN A NUMBER CHECKS IF IT IS INT OR FLOAT
int istype(float val)
{
    int truncated = (int)val;
    if (val == truncated){return 1;}
	else{ return 3;}
}

//===============================================================================
//===============================================================================

//GIVEN A STRING TRIMS THE FIRST CHARACTER AND THE LAST
char* trim_first_last(char * value){
	value++;
	int i = 0;
	while(value[i] != '\0')
	{
		i++;
    }
	value[i-1] = '\0';
	return value;
}
