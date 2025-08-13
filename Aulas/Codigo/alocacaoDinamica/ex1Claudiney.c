#include <stdlib.h>
#include <stdio.h>

int main(){

    int *vet, tam=5;

    vet = (int*) malloc(tam*sizeof(int));

    if(vet==NULL){
        printf("Alocacao mal sucedida");
    }

    for(int i=0; i<5; i++){
        scanf("%d", vet);
        printf("\nvet[%d]: %d\n",i+1,(*vet));
        vet++;
    }

    free(vet);

    if(vet==NULL){
        printf("memoria desalocada");
    }else{
        free(vet);
    }
    return 0;
}