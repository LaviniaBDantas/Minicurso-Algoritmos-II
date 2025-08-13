#include <stdio.h>

int verificaNumeros(int a){
    if(a>0){
        return 1;
    }
    else if(a<0){
        return -1;
    }
    else{
        return 0;
    }
}

int main(){
    int num;
    scanf("%d", &num);

    int n = verificaNumeros(num);

    if(n==1) printf("POSITIVO!");
    else if(n==-1) printf("NEGATIVO!");
    else printf("ZER0");
}