#include <stdio.h>

extern FILE *yyin;
extern int yylex();


int main (int argc, char *argv[]){
	int tok;
if(!(yyin = fopen(argv[1],"r"))) return 1;

int cont_words = 0;
int var = 0;
int line = 0;

while(tok = yylex()){

	switch(tok){

		case 2 :

			printf("Word");
			cont_words++;

		break; 


		case 3 :

			printf("int");
			var++;
		break;

		case 4 :

		printf("(");

		break;

		case 5 :
			printf("*");

		break;

		case 6 :

		printf(",");

		break;

		case 7 :

		printf("char");
		var++;
		break;

		case 8 :

		printf(")");

		break;

		case 9 :

		printf("{");

		break;

		case 10 :

		printf("}");

		break;

		case 11:

		printf(";");

		break;

		case  12:

		printf("printf");

		break;

		case 13 :

		printf("return");

		break;

		case 14 :

		printf("number");

		break;

		case 15 :

		printf("\"");

		break;

		case 16 :

		printf(" ");

		break;

		case 17 :

		printf("\n");
		line++;

		break;

		case 18 :

		printf("	");

		break;

		case 99 :

		printf("-- IVALID --\n");

		break;

	}

}

printf(" ---------- Relatorio ---------- \n");
printf("  ---------- palavras %i\n", cont_words );
printf("  ---------- variaveis %i\n", var );
printf("  ---------- linhas %i\n", line );

return 0;
}
