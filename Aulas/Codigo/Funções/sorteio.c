#include <stdio.h>

int main()
{

    int vetResultado[6], vetCartela[6], op,cont = 0;

    printf("Digite o resultado do sorteio: ");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &vetResultado[i]);
        while (vetResultado[i] < 1 || vetResultado[i] > 60)
        {
            printf("\nNumero invalido, digite outro: ");
            scanf("%d", &vetResultado[i]);
        }
    }

    do
    {
        printf("\nDigite os numeros de sua cartela: ");
        for (int i = 0; i < 6; i++)
        {
            scanf("%d", &vetCartela[i]);
            while (vetCartela[i] < 1 || vetCartela[i] > 60)
            {
                printf("Numero invalido, digite outro: ");
                scanf("%d", &vetCartela[i]);
            }
        }
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                if (vetResultado[i] == vetCartela[j])
                {
                    cont++;
                }
            }
        }

        switch (cont)
        {
        case 1:
            printf("Voce acertou 1 numero!");
            break;

        case 2:
            printf("Voce acertou 2 numeros!");
            break;

        case 3:
            printf("Voce acertou 3 numeros, fez um terno!");
            break;

        case 4:
            printf("Voce acertou 4 numeros, fez uma quadra!");
            break;

        case 5:
            printf("Voce acertou 5 numeros, fez uma quina!");
            break;

        case 6:
            printf("Voce acertou todos numeros, parabens voce é um milionario!!!!!!");
            break;

        default:
            printf("Nao foi dessa vez :(");
            break;
        }

        printf("\nEscolha uma opcao: \n(1)- Conferir outra cartela\n(0)-Sair");
        scanf("%d", &op);
    } while (op == 1);

    return 0;
}