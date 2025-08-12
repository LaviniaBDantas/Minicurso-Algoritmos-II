#include <stdio.h>

void incrementar(int *x) {
    (*x)++;  // Modifica o valor original
}

int main() {
    int valor = 5;
    incrementar(&valor);  // Passa o endereço de 'valor'
    printf("Valor incrementado: %d\n", valor); // Saída: 6
    return 0;
}


void incrementar(int x) {  
    x++;  
}

int main() {
    int valor = 5;
    incrementar(valor);  
    printf("Valor após incrementar: %d\n", valor); 
    return 0;
}

