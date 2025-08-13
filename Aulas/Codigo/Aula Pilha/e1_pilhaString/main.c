#include <stdio.h>
#include "pilha.h"
#include "funcoes.c"

int main(){

    Pilha* pilha;
    char str[10];
    
    pilha= cria_pilha();

    empilha(pilha, "Mauricio");
    empilha(pilha, "Marcelo");
    printf("Valor desempilhado: %s\n",desempilha(pilha));
    empilha(pilha, "Guilherme");
    empilha(pilha, "Paulo");
    printf("Valor desempilhado: %s\n",desempilha(pilha));

    
    return 0;
}