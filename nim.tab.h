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

#ifndef YY_YY_NIM_TAB_H_INCLUDED
# define YY_YY_NIM_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INTLIT = 258,
    FLOATLIT = 259,
    STRLIT = 260,
    CHARLIT = 261,
    BOOLLIT = 262,
    IDENT = 263,
    INDG = 264,
    INDEQ = 265,
    DED = 266,
    BREAK = 267,
    CONTINUE = 268,
    ELIF = 269,
    ELSE = 270,
    FOR = 271,
    IF = 272,
    IN = 273,
    NIL = 274,
    PROC = 275,
    RETURN = 276,
    TUPLE = 277,
    TYPE = 278,
    VAR = 279,
    WHILE = 280,
    IFX = 281,
    ELSEX = 282,
    XOR = 283,
    OR = 284,
    AND = 285,
    NE = 286,
    GE = 287,
    LE = 288,
    EQ = 289,
    SLICE = 290,
    MOD = 291,
    DIV = 292,
    NOT = 293,
    PEQ = 294,
    MEQ = 295,
    UPLUS = 296,
    UMINUS = 297,
    LPAREN = 298
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 68 "nim.y" /* yacc.c:1909  */

int integer;
double floater;  /* For returning numbers.                   */
char *str;
char ch;
idorlit idl;
// symrec  *tptr;   /* For returning symbol-table pointers      */
sdd s_tree;

#line 108 "nim.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_NIM_TAB_H_INCLUDED  */
