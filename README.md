# Analisador-lexico
Analisador lexico teste 

Arquivo que contém todas as regras "teste01.l"
Arquivo que contém como deve ser a leitura "arq.c"
Arquivo gerado na compilação "exe"
Arquivo de teste para o programa "ent.txt"

*Compilação

$ flex teste01.l
$ gcc -c lex.yy.c arq.c
$ gcc -o exe lex.yy.o arq.o

*Execultar

$ ./exe ent.txt

//
