/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 41 "myParser.y" /* yacc.c:1909  */
 
        int num;              /*  integer value */
        float fp;               /* floating point value */
        char* str;              /* Ptr to  string  */


#line 119 "myParser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYPARSER_TAB_H_INCLUDED  */
