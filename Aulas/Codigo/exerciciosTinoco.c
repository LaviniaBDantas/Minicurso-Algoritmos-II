#include <stdio.h>
#include <string.h>
struct Especie
{
    char filo[15];
    char classe[15];
    char alimentacao[20];
    char nome[15];
};

int main()
{
    // char filoEntrada[15], classeEntrada[15], alimentacao[20];
    struct Especie especieEntrada;
    // struct Especie dadosEspecies[8];

    scanf("%s", &especieEntrada.filo);
    scanf("%s", &especieEntrada.classe);
    scanf("%s", &especieEntrada.alimentacao);
    //printf("%s %s %s", especieEntrada.filo, especieEntrada.classe, especieEntrada.alimentacao);

    if (strcmp(especieEntrada.filo, "vertebrado") == 0)
    {
        if (strcmp(especieEntrada.classe, "ave") == 0)
        {
            if (strcmp(especieEntrada.alimentacao, "carnivoro") == 0)
            {
                strcpy(especieEntrada.nome, "aguia");
                // printf("aguia");
                printf("%s", especieEntrada.nome);
            }
            else if (strcmp(especieEntrada.alimentacao, "onivoro") == 0)
            {
                strcpy(especieEntrada.nome, "pomba");
                printf("%s", especieEntrada.nome);
            }
        }
        else if (strcmp(especieEntrada.classe, "mamifero") == 0)
        {
            if (strcmp(especieEntrada.alimentacao, "onivoro") == 0)
            {
                strcpy(especieEntrada.nome, "homem");
                printf("%s", especieEntrada.nome);
            }
            else if (strcmp(especieEntrada.alimentacao, "herbivoro") == 0)
            {
                strcpy(especieEntrada.nome, "vaca");
                printf("%s", especieEntrada.nome);
            }
        }
    }
    else if (strcmp(especieEntrada.filo, "invertebrado") == 0)
    {
        if (strcmp(especieEntrada.classe, "inseto") == 0)
        {
            if (strcmp(especieEntrada.alimentacao, "hematofago") == 0)
            {
                strcpy(especieEntrada.nome, "pulga");
                printf("%s", especieEntrada.nome);
            }
            else if (strcmp(especieEntrada.alimentacao, "herbivoro") == 0)
            {
                strcpy(especieEntrada.nome, "lagarta");
                printf("%s", especieEntrada.nome);
            }
        }
        else if (strcmp(especieEntrada.classe, "anelideo") == 0)
        {
            if (strcmp(especieEntrada.alimentacao, "hematofago") == 0)
            {
                strcpy(especieEntrada.nome, "sanguessuga");
                printf("%s", especieEntrada.nome);
            }
            else if (strcmp(especieEntrada.alimentacao, "onivoro") == 0)
            {
                strcpy(especieEntrada.nome, "minhoca");
                printf("%s", especieEntrada.nome);
            }
        }
    }

    return 0;
}