#include <stdio.h>

int main()
{   
    int bytes, *vet, op, i, valor;
    printf("Quantos bytes deseja alocar?\n");
    scanf("%d", &bytes);

    int tam = bytes / 4;

    vet = (int *)calloc(tam, sizeof(int));
    int *e1 = vet;

    printf("Escolha uma opcao: \n(1)-Inserir valor\n(2)-Consultar valor\n");
    scanf("%d", &op);

    if (op == 1)
    {
        printf("\nEm qual posicao deseja inserir o valor?");
        scanf("%d", &i);

        printf("\nQual valor deseja inserir?");
        scanf("%d", &valor);

        vet+=i-1;
        (*vet) = valor;

        for(int i=0; i<tam; i++){
            printf("\nvet[%d]: %d\n",i,(*e1));
            e1++;
        }

        // Jeito básico, que já fazemos normalmente
        // vet[i-1] = valor;
        // for(int i=0; i<tam; i++){
        //     printf("\nvet[%d]: %d\n",i,vet[i]);
        // }
    }
    else if (op == 2)
    {

    }
    else
    {
        printf("Opcao invalida!");
    }
    return 0;
}