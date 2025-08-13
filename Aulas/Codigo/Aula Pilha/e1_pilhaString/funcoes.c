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

void desempilha (Pilha* p){
    if(vazia(p)){
        printf("Pilha vazia!\n");
    }else{
        p->topo--;
        printf("Desempilhando: %s\n", p->str[p->topo]); 
    }
}




