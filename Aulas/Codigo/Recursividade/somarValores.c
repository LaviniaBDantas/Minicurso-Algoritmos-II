#include <stdio.h>

int soma(int vet[], int tam) {
    if (tam == 0) {
        return 0; // condição de parada
    } else {
        return vet[0] + soma(vet + 1, tam - 1);
    }
}

int main() {
    int vet[1] = {8};
    printf("A soma eh %d\n", soma(vet, 1));
    return 0;
}
