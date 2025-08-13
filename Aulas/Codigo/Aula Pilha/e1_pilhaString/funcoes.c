#include "pilha.h"
#include <stdlib.h>
#include <stdio.h>
struct pilha {
 int topo;
 char* str[10];
};

Pilha* cria_pilha(){
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->topo = 0;
    return p;
}

void empilha (Pilha* p, char* str){
    if(p->topo < 10){   
        printf("Empilhando: %s\n", str);
        p->str[p->topo]=str;
        p->topo++;
    }else{
        printf("Pilha cheia!\n");
    }
}

int vazia (Pilha* p){
    if(p->topo==0){
        return 1; 
    }else{
        return 0; 
    }
}


char* desempilha (Pilha* p){
    char aux;
    if(vazia(p)){
        printf("Pilha vazia!\n");
    }else{
        return p->str[p->topo--];
    }
}





