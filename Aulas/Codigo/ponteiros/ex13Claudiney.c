#include <stdio.h>
#include <math.h>

void calc_esfera(float R, float *area, float *volume);

int main(){
    float R, a, v;

    printf("Digite o raio: ");
    scanf("%f", &R);

    calc_esfera(R, &a, &v);

    printf("Area da esfera: %f", a);
    printf("\nVolume da esfera: %f", v);

    return 0;
}

// A = 4 *  * R2
// V = 4/3 *  * R3

void calc_esfera(float R, float *area, float *volume){

    float pi = 3.14;
    *area = 4*pi*pow(R,2);
    *volume = (4/3) * pi * pow(R,3);
}