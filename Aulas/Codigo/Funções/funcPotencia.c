#include <stdio.h>

void pot(int base, int expoente);

int main(){
    int n1, n2;
    printf("Digite a base: ");
    scanf("%d", &n1);

    printf("Digite o expoente: ");
    scanf("%d", &n2);

    pot(n1, n2);

    return 0;
}

void pot(int base, int expoente){
    int r=1;
    for(int i=0; i<expoente; i++){
        r = r * base;
        //ou r*=base;
    }

    printf("O resultado de %d elevado a %d eh: %d", base, expoente, r);

}