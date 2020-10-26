%{
#include "myParser.tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lineNumber = 1;  
int current_indent_level = 0 ; 
extern int indent_level ; 
int dipla_anoixta = 0 ;
int  mona_anoixta = 0 ;
#define YY_USER_INIT { \
   BEGIN(normal); \
 }

%}



%x indent
%s normal
%s comments 
	

letters  [a-zA-Z]
thetiko [1-9][0-9]*
digit [0-9]
underscore [_] 
keno  [ \t]
grammh [\n]
int  -?{digit}+
float {int}"."{digit}+
boolean ("true"|"false")
name ({letters}|{underscore})({underscore}|{letters}|{digit})*
string \"(\\.|[^\"])*\"
and ("&"|"and")
or  ("|"|"or")
xor ("^"|"xor")  


%%

<indent>"\t"  {current_indent_level++;} 

<indent>"\n"  {current_indent_level=0;} 

<indent>"#"    {BEGIN comments;}

<indent>"\"\"\"" {  dipla_anoixta = 1 ;   
                     BEGIN comments;
                   }
 
<indent>"\'\'\'" {  mona_anoixta = 1 ; 
                     BEGIN comments;
                   }
 


<indent>.  {	
							
                            unput(*yytext); 
					         if (current_indent_level == indent_level)
							{
									BEGIN normal;
							
							}
							else if(current_indent_level < indent_level)
							{    
							     indent_level --; 
								 //printf(" DEDENT");
								 return DEDENT ;  
								 

							}
							else
							{
							    indent_level =  current_indent_level ;  
								//printf(" INDENT");
							    return INDENT ;  
							}
					  
					  
				   } 
<indent><<EOF>>  		{  
							
							if (current_indent_level == 0 && current_indent_level < indent_level) {
								unput(*yytext);
								indent_level--;
								BEGIN indent;
								return DEDENT;
							}
							else{  yyterminate();  return END;} 
						}				   


<comments>. {}
<comments>"\n" {if(dipla_anoixta == 1|| mona_anoixta==1){
                 lineNumber++;   
                }
                else{
				unput(*yytext);lineNumber++; BEGIN normal;}
                }
<comments>"\"\"\"" {  if(dipla_anoixta==1) {
						 dipla_anoixta = 0 ;
                         BEGIN indent;
						 }
}

<comments>"\'\'\'" {  if(mona_anoixta==1) {
						 mona_anoixta = 0 ;
                         BEGIN indent;
						 }
}


<normal>"print"                {return PRINT; }
<normal>{boolean}              {yylval.str=strdup(yytext); return BOOLEAN;}
<normal>"\"\"\""    {dipla_anoixta = 1 ; BEGIN comments;}
<normal>"#"			{BEGIN comments;}
<normal>"("			{return START_PAR;} 
<normal>")"			{return STOP_PAR;} 
<normal>","		 	{return COMMA;} 
<normal>"*"			{return STAR;} 
<normal>"."	 		{return DOT;} 
<normal>"["         {return START_BRAC;}
<normal>"]"         {return STOP_BRAC;}
<normal>"="         {return EQUAL;}
<normal>"from"		{return FROM;} 
<normal>"import"	{return IMPORT;} 
<normal>"as"		{return AS;}
<normal>"<"         {return LESSER;}
<normal>">"         {return GREATER;}
<normal>"!"         {return NOT_EQUAL;}
<normal>"is"        {return IS;}
<normal>"not"       {return NOT;}
<normal>"in"        {return IN;}
<normal>"+"         {return PLUS;}
<normal>"-"         {return MINUS;}
<normal>"@"         {return AT;}
<normal>"/"         {return FORWARD_SLASH;}
<normal>"\\"        {return BACKSLASH;}
<normal>"%"         {return PERCENT;}
<normal>"~"         {return TILDE;}
<normal>"await"     {return AWAIT;}
<normal>"for"       {return FOR;}
<normal>"lambda"    {return LAMBDA;}
<normal>"ansync"    {return ASYNC;}
<normal>":"         {return COLON;}
<normal>"if"        { return IF;}
<normal>"else"      {return ELSE;}
<normal>"elif"    {return ELSEIF;}
<normal>"yield"     {return YIELD;}
<normal>"class"     {return CLASS;}
<normal>"{"         {return START_CURLY;}
<normal>"}"         {return STOP_CURLY;}
<normal>{and}       {return AND;}
<normal>{or}	    {return OR;}
<normal>{xor}       { return XOR;}
<normal>"def"       {return DEF;}
<normal>"__init__"       { return DEF_INIT;}
<normal>"self"       {return SELF;}
<normal>{name} 			{ yylval.str = strdup(yytext);return NAME;}
<normal>{keno}                  { } 
<normal>{grammh}                { BEGIN indent; lineNumber++; unput(*yytext); return NEWLINE; } 
<normal>"<!--"[^-]*"-->"        {}
<normal>{int}     			    {yylval.num = atoi(yytext);return INT;}
<normal>{string}                {yylval.str=strdup(yytext); return STRING;}
<normal>{float}                {yylval.str=strdup(yytext); return FLOAT;}



<normal><<EOF>>		 {printf("normal END === ");  BEGIN indent;}
%%

int yywrap(void) {
	return 1;
}

