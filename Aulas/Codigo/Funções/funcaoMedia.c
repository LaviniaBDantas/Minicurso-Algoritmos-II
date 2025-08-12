#include <stdio.h>

float media(float n1, float n2, float n3){

    float media;
    media = (n1+n2+n3)/3;

    if(media >= 6.0){
        printf("APROVADO!");
    }
    else{
        printf("REPROVADO!");
    }

    return media;
}


int main(){

    float p1, p2, p3;

    scanf("%f", &p1);
    scanf("%f", &p2);
    scanf("%f", &p3);

    // printf("A media eh: %.2f", media(p1, p2, p3));

    float m = media(p1, p2, p3);
    printf("A media eh: %.2f", m);



}