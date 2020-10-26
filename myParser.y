%{
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

%}

//Union for YYTYPE, yylval is a variable of type YYTYPE 
%union { 
        int num;              /*  integer value */
        float fp;               /* floating point value */
        char* str;              /* Ptr to  string  */

};



//Tokens ---------------
%token START_PAR
%token STOP_PAR
%token START_BRAC
%token STOP_BRAC
%token COMMA
%token STAR
%token FROM
%token IMPORT
%token AS
%token NAME
%token DOT
%token INT
%token FLOAT 
%token EQUAL
%token BOOLEAN
%token LESSER
%token GREATER
%token NOT_EQUAL
%token IS
%token NOT
%token IN
%token PLUS
%token MINUS
%token AT
%token FORWARD_SLASH
%token BACKSLASH
%token PERCENT
%token TILDE
%token AWAIT
%token FOR
%token LAMBDA
%token ASYNC
%token COLON
%token IF
%token ELSE
%token ELSEIF
%token OR
%token AND
%token YIELD
%token VERTICAL_LINE
%token POWER
%token AMPERSAND
%token START_CURLY
%token STOP_CURLY
%token DEF
%token CLASS
%token NEWLINE
%token INDENT 
%token DEDENT
%token DEF_INIT
%token SELF
%token END
%token STRING 
%token XOR
%token PRINT

//USING %LEFT FOR CORRECT OPERATIONS(+,-,*,/) BEHAVOR
%left PLUS MINUS
%left STAR FORWARD_SLASH

//DECLARING THE TYPE OF SERTEN RULES AND TOKENS IN ORDER TO USE $ REFERENCES
%type<num>  INT
%type<str>  NAME
%type<str>  identifier
%type<str>   FLOAT
%type<num>  calc_int
%type<fp>   calc_float
%type<fp>	calc_var

%%

//--------------------------------Essential----------------------------------------
//------------------------------------------------------------------------------------

//PROGRAMM RUNS AND INCLUDES ALL THE RULES UNTIL END OF FILE IS REACHED

programm : %empty
| programm NEWLINE
| programm END 
| programm rule;

//CONTAINS ALL THE MAJOR RULES
rule :	assignment_stmt  NEWLINE
        |import_stmt NEWLINE
		|call NEWLINE
		|class
		|function
		|if_stmt
		|for_stm
		|assignment_stmt  END
        |import_stmt END
		|call END
		|print NEWLINE
        |print END
        ;

//------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------

//----------------------------FUNCTION----------FOR----------IF-------------------------
//------------------------------------------------------------------------------------

//AFTER THE RULES WE HAVE THE SUITE RULE THAT HANDLES THE INDENT AND DETEND OF PYTHON GRAMMAR

for_stm : FOR identifier IN primary COLON suite;

function : DEF identifier{add_names(yylval.str);} START_PAR function_const STOP_PAR COLON suite
			;
function_const :%empty | constructor_content;

if_stmt : IF conditional_expression COLON suite el_stmnt
		 | IF conditional_expression COLON suite
		  
el_stmnt :  ELSEIF  conditional_expression COLON suite el_stmnt
          | ELSEIF  conditional_expression COLON suite
          |ELSE COLON suite  ;


conditional_expression:  conditional_expression cond_sign conditional_expression 
                        | START_PAR  conditional_expression cond_sign conditional_expression STOP_PAR						
						| primary 
						;

cond_sign  : LESSER | GREATER | LESSER EQUAL | GREATER EQUAL | EQUAL EQUAL 
					| NOT_EQUAL EQUAL | IS | IS NOT | IN | NOT IN  | AND | OR | XOR 
							;
		   
//--------------------------------------PRINT-----------------------------------------
//------------------------------------------------------------------------------------

print : PRINT START_PAR STRING {printf( trim_first_last(yylval.str));} print_exp STOP_PAR {printf("\n");}
		|PRINT START_PAR NAME  {printf(value_of_variable(yylval.str));} print_exp STOP_PAR {printf("\n");}
        |PRINT START_PAR NAME  {printf(value_of_variable(yylval.str));printf("\n");}  STOP_PAR 
		|PRINT START_PAR STRING{printf( trim_first_last(yylval.str));printf("\n");} STOP_PAR 
		|PRINT START_PAR INT{printf("%d",yylval.num);printf("\n");} STOP_PAR 
        |PRINT START_PAR literal{printf("%s",yylval.str);printf("\n");} STOP_PAR 
		|PRINT START_PAR calculation{printf("%s",yylval.str);printf("\n");} STOP_PAR 
        |PRINT START_PAR  STOP_PAR	
		;

print_exp : print_exp PLUS NAME    {printf(value_of_variable(yylval.str));}
			| print_exp PLUS STRING{printf( trim_first_last(yylval.str));}
			|PLUS NAME             {printf(value_of_variable(yylval.str));}
			| PLUS STRING          {printf( trim_first_last(yylval.str));};

//------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------

//----------------------------Class---------------------------------------------------
//------------------------------------------------------------------------------------

//WE ADD THE NAME OF THE CLASS TO AN ARRAY TO CHECK IF NEEDED LATER
 
class : CLASS NAME{add_names(yylval.str);} COLON suite_class ;

constructor :  DEF DEF_INIT START_PAR SELF COMMA constructor_content STOP_PAR COLON suite
				|DEF DEF_INIT START_PAR  SELF STOP_PAR COLON suite ;
				
constructor_content : identifier | constructor_content COMMA identifier;

call  : NAME{check_name(yylval.str); } START_PAR  to_call 
		|NAME DOT NAME{check_name(yylval.str); } START_PAR  to_call;

 to_call: after_expression STOP_PAR 
         | STOP_PAR ;

//------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------


//---------------------ASSIGMENT------------------------------------------------------
//------------------------------------------------------------------------------------

//WE STORE THE VALUE OF THE VARIABLES TO BE ABLE TO MAKE OPERATIONS LATER

assignment_stmt :  target_list{ nameA = yylval.str;} EQUAL after_expression { save_varables(typet,nameA,yylval.str);}
				   ;
				   
after_expression : primary COMMA after_expression | primary | calculation;



target_list     :  target COMMA target_list
				   |target
					;
					
target          :  target DOT target
					|identifier START_BRAC target STOP_BRAC 
					|identifier START_BRAC INT STOP_BRAC 
					|identifier
					|SELF
					;

primary :  target  | literal | list | call; 
 
list : START_BRAC list_content STOP_BRAC
	  |START_BRAC  STOP_BRAC;
list_content :literal COMMA list_content | literal ;

// WE USE THE VARIABLE TYPE_T, TO GET THE TYPE OF THE TOKEN THAT WE RECEIVED
literal:INT{typet = 1;sprintf(yylval.str, "%d", $1);} | FLOAT{typet=3;} | STRING{typet = 2;}| BOOLEAN{typet = 4;} ;
		   
//------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------
		   
		   
//---------------------CALCULATION----------------------------------------------------
//------------------------------------------------------------------------------------

//HANDLING THE OPARETIONS AND THE TYPE OF VARIABLE THAT WILL BE RETURNED

calculation :calc_var {  if(typet==1)
					     {
					        sprintf(yylval.str, "%d", (int)$1);
					     } 
                         else if(typet==3){ 
							sprintf(yylval.str, "%f", $1);
						 }
					  }
			| calc_float { sprintf(yylval.str, "%f", $1);} 
			| calc_int {sprintf(yylval.str, "%d", $1);};
	
	
calc_var : NAME { $$ = atof(value_of_variable($1));
				 if(type_of_variable($1)== 2 || type_of_variable($1)== 4 )
				 {
				 printf("\nError in line %d value is not a number\n",lineNumber);
				 errorCount++;
				 }
                 typet=type_of_variable($1); }
				 
		| calc_var PLUS calc_var	         { $$ = $1 + $3; typet= istype($$);}
		| calc_var MINUS calc_var	         { $$ = $1 - $3; typet=istype($$);;}
		| calc_var STAR calc_var             { $$ = $1 * $3; typet=istype($$);}
		| calc_var FORWARD_SLASH calc_var	 { $$ = $1 / $3; typet=istype($$);}
		| START_PAR calc_var STOP_PAR		 { $$ = $2; typet=istype($$);}
		
		| calc_int PLUS calc_var	 	     { $$ = $1 + $3; typet= istype($$);}
		| calc_int MINUS calc_var	 	     { $$ = $1 - $3; typet= istype($$);}
		| calc_int STAR calc_var 	         { $$ = $1 * $3; typet= istype($$);}
		| calc_int FORWARD_SLASH calc_var	 { $$ = $1 / $3; typet= istype($$);}
		| calc_var PLUS calc_int	 	     { $$ = $1 + $3; typet= istype($$);}
		| calc_var MINUS calc_int	 	     { $$ = $1 - $3; typet= istype($$);}
		| calc_var STAR calc_int 	         { $$ = $1 * $3; typet= istype($$);}
		| calc_var FORWARD_SLASH calc_int	 { $$ = $1 / $3; typet=3;}
		
		| calc_var PLUS calc_float	 	     { $$ = $1 + $3; typet=3;}
		| calc_var MINUS calc_float	 	     { $$ = $1 - $3; typet=3;}
		| calc_var STAR calc_float 	         { $$ = $1 * $3; typet=3;}
		| calc_var FORWARD_SLASH calc_float	 { $$ = $1 / $3; typet=3;}
		| calc_float PLUS calc_var	 	     { $$ = $1 + $3; typet=3;}
		| calc_float MINUS calc_var	 	     { $$ = $1 - $3; typet=3;}
		| calc_float STAR calc_var 	         { $$ = $1 * $3; typet=3;}
		| calc_float FORWARD_SLASH calc_var	 { $$ = $1 / $3; typet=3;}

		;		
		
	
calc_float: FLOAT {yylval.fp=atof(yylval.str);$$=yylval.fp; typet=3;} 
	  | calc_float PLUS calc_float	         { $$ = $1 + $3; typet=3;}
	  | calc_float MINUS calc_float	         { $$ = $1 - $3; typet=3;}
	  | calc_float STAR calc_float           { $$ = $1 * $3; typet=3;}
	  | calc_float FORWARD_SLASH calc_float	 { $$ = $1 / $3; typet=3;}
	  | START_PAR calc_float STOP_PAR		 { $$ = $2; typet=3;}
	  | calc_int PLUS calc_float	 	     { $$ = $1 + $3; typet=3;}
	  | calc_int MINUS calc_float	 	     { $$ = $1 - $3; typet=3;}
	  | calc_int STAR calc_float 	         { $$ = $1 * $3; typet=3;}
	  | calc_int FORWARD_SLASH calc_float	 { $$ = $1 / $3; typet=3;}
	  | calc_float PLUS calc_int	 	     { $$ = $1 + $3; typet=3;}
	  | calc_float MINUS calc_int	 	     { $$ = $1 - $3; typet=3;}
	  | calc_float STAR calc_int 	         { $$ = $1 * $3; }
	  | calc_float FORWARD_SLASH calc_int	 { $$ = $1 / $3; typet=3;}
	  | calc_int FORWARD_SLASH calc_int		 { $$ = $1 / (float)$3; typet=3;}
	  ;		
		
calc_int : INT	{$$=$1; typet = 1;} 
	  | calc_int PLUS calc_int	             { $$ = $1 + $3; }
	  | calc_int MINUS calc_int	             { $$ = $1 - $3; }
	  | calc_int STAR calc_int               { $$ = $1 * $3; }
	  | calc_int FORWARD_SLASH calc_int      { $$ = $1 * $3; }
	  | START_PAR calc_int STOP_PAR		     { $$ = $2; }
	  ;
				


//------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------

//----------------------------------IMPORT--------------------------------------------
//------------------------------------------------------------------------------------

import_stmt   :	 IMPORT Module  Namespace module_rec
                |FROM relative_module IMPORT  identifier Namespace module_rec
 		        |FROM relative_module IMPORT START_PAR identifier Namespace module_rec STOP_PAR
                |FROM relative_module IMPORT STAR
		;


mult_dot : 	DOT
			|DOT mult_dot
			;

Module :	identifier 
			| identifier  DOT identifier
			;

relative_module :  	mult_dot Module
			     | Module
			     | mult_dot
			     ;

module_rec  : %empty 
              |module_rec COMMA Module Namespace
			;

Namespace : %empty 
		 	|AS identifier
			;
//------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------

//-------------------------------------SUITE------------------------------------------
//------------------------------------------------------------------------------------

//WE HANDLE THE INDENT AND DETEND USING RULE SUITE AND INSIDE THE SUITE_CONTENT WE CAN RUN ALL THE RULES 

suite: NEWLINE INDENT suite_content DEDENT;
suite_content : rule |suite_content rule; 

suite_class: NEWLINE INDENT class_content DEDENT;

class_content : rule |class_content rule
                | constructor
				|class_content constructor; 
				
identifier: NAME ;

//-------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------
%%

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
