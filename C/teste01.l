%option noyywrap nodefault

%{

enum exit{
	word = 2,
	integer = 3,
	parenthesis_open = 4,
	pointer = 5,
	separator = 6,
	character = 7,
	parenthesis_close = 8,
	escope_open = 9,
	escope_close = 10,
	endl = 11,
	print = 12,
	returned = 13,
	number = 14,
	asp_double = 15,
	espace = 16,
	next_line = 17,
	tab = 18,
	invalid = 99,
};

%}

%%
"int" {return integer;}
"char" {return character;}
"printf" {return print;}
"return" { return returned;}
"(" {return parenthesis_open;}
")" { return parenthesis_close;}
"{" { return escope_open;}
"}" { return escope_close;}
"*" {return pointer;}
"," {return separator;}
";" {return endl;}
"\"" {return asp_double;} 
[0-9]+ {return number;}
[a-zA-Z][a-zA-Z0-9]* { return word;}
[ ] { return espace; }
[\n] { return next_line;}
[\t] {return tab; }
. { return invalid;}
%%

