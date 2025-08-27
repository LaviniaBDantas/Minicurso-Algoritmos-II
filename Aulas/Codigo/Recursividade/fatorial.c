#include <stdio.h>

int fatorial(int num){
    int fat;
    if(num<=0){
        return 1;
    }
    else{
        fat = num * fatorial(num-1);
        return fat;
    }
}

int main(){

    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("O fatorial de %d eh: %d",n, fatorial(n));

    return 0;
}