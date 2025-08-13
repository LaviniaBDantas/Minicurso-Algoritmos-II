#include <stdio.h>
#include "pilha.h"
#include "funcoes.c"

int main(){

    Pilha* pilha;    
    pilha= cria_pilha();

    empilha(pilha, "Mauricio");
    empilha(pilha, "Marcelo");
    desempilha(pilha);
    empilha(pilha, "Guilherme");
    empilha(pilha, "Paulo");
    desempilha(pilha);

    
    return 0;
}