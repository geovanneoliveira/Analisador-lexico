#include <stdio.h>

extern FILE *yyin;
int yylex();


int main (int argc, char *argv[]){
	int tok;
if(!(yyin = fopen(argv[1],"r"))) return 1;

int cont_words = 0;
int line = 1;

while(tok = yylex()){

	switch(tok){

		case 1:

		printf("and");

		break;

		case 2 :

			printf("end");
		
		break; 


		case 3 :

			printf("in");
			
		break;

		case 4 :

		printf("repeat");

		break;

		case 5 :
			printf("break");

		break;

		case 6 :

		printf("false");

		break;

		case 7 :

		printf("local");
		
		break;

		case 8 :

		printf("return");

		break;

		case 9 :

		printf("do");

		break;

		case 10 :

		printf("for");

		break;

		case 11:

		printf("nil");

		break;

		case  12:

		printf("then");

		break;

		case 13 :

		printf("else");

		break;

		case 14 :

		printf("function");

		break;

		case 15 :

		printf("not");

		break;

		case 16 :

		printf("true");

		break;

		case 17 :

		printf("elseif");
		
		break;

		case 18 :

		printf("if");

		break;

		case 19 :

		printf("or");

		break;

		case 20 :

		printf("until");

		break;

		case 21 :

		printf("while");

		break;

		case 22 :

		printf("Variavel Global");

		break;

		case 23 :

		printf("+");

		break;

		case 24 :

		printf("-");

		break;

		case 25 :

		printf("*");

		break;

		case 26 :

		printf("/");

		break;

		case 27 :

		printf("porCent");

		break;

		case 28 :

		printf("^");

		break;

		case 29 :

		printf("#");

		break;

		case 30 :

		printf("==");

		break;

		case 31 :

		printf("~=");

		break;

		case 32 :

		printf("<=");

		break;

		case 33 :

		printf(">=");

		break;

		case 34 :

		printf("<");

		break;

		case 35 :

		printf(">");

		break;

		case 36 :

		printf("=");

		break;

		case 37 :

		printf("(");

		break;

		case 38 :

		printf(")");

		break;

		case 39 :

		printf("{");

		break;

		case 40 :

		printf("}");

		break;

		case 41 :

		printf("[");

		break;

		case 42 :

		printf("]");

		break;

		case 43 :

		printf(";");

		break;

		case 44 :

		printf(":");

		break;

		case 45 :

		printf(",");

		break;

		case 46 :

		printf(".");

		break;

		case 47 :

		printf("..");

		break;

		case 48 :

		printf("...");

		break;

		case 49 :

		printf("number");

		break;

		case 50 :

		printf("Word");

		cont_words++;

		break;


		case 51 :

		printf(" ");

		break;


		case 52 :

		printf("\t");

		break;


		case 53 :

		printf("\n");

		break;

		case 54 :

		printf("--Comentario");

		break;

		case 99 :

		printf(" INVALID ");

		break;

	}

}

printf("\n");
printf(" ---------- Relatorio ---------- \n");
printf(" ---------- palavras %i\n", cont_words );
printf(" ---------- linhas %i\n", line );

return 0;
}
