#include <stdio.h>
#include <math.h>

float distancia(float x1, float y1, float x2, float y2)
{
    float x, y, soma, r;

    // Forma mais robusta, passo a passo
    x = x2 - x1;
    y = y2 - y1;
    x = pow(x2 - x1, 2);
    y = pow(y2 - y1, 2);
    r = sqrt(soma);

    // Forma simplificada
    r = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    return r;
}
int main()
{
    int x1 = 2, y1 = 3, x2 = 7, y2 = 15;
    printf("A distancia entre esses pontos eh: %f", distancia(x1, y1, x2, y2));
    return 0;
}