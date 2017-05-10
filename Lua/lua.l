%option noyywrap nodefault
%x COMENTARIO

%%
"and"		{return 1;}
"end"		{return 2;}
"in"		{return 3;}
"repeat"	{return 4;}
"break"		{return 5;}
"false"		{return 6;}
"local"		{return 7;}
"return"	{return 8;}
"do"		{return 9;}
"for"		{return 10;}
"nil"		{return 11;}
"then"		{return 12;}
"else"		{return 13;}
"function"	{return 14;}
"not"		{return 15;}
"true"		{return 16;}
"elseif"	{return 17;}
"if"		{return 18;}
"or"		{return 19;}
"until"		{return 20;}
"while"		{return 21;}
[_][A-Z]+	{return 22;}
"+"			{return 23;}
"-"			{return 24;}
"*"			{return 25;}
"/"			{return 26;}
"%"			{return 27;}
"^"			{return 28;}
"#"			{return 29;}
"=="		{return 30;}
"~="		{return 31;}
"<="		{return 32;}
">="		{return 33;}
"<"			{return 34;}
">"			{return 35;}
"="			{return 36;}
"("			{return 37;}
")"			{return 38;}
"{"			{return 39;}
"}"			{return 40;}
"["			{return 41;}
"]"			{return 42;}
";"			{return 43;}
":"			{return 44;}
","			{return 45;}
"."			{return 46;}
".."		{return 47;}
"..."		{return 48;}
[+|-]?[0-9]+ {return 49;}
[a-zA-Z][a-zA-Z0-9_]* {return 50;}
[ ]			{return 51;}
[\t]		{return 52;}
[\n]		{return 53;}

"--[" {BEGIN(COMENTARIO);}
<COMENTARIO>"]--" {BEGIN(INITIAL);}
<COMENTARIO>[.|\n] {}

. 			{ return 99;}
%%
