#include <stdio.h>
#include <math.h>

int main()
{
    int x=15;
    printf("valor de x: %d", x);
    printf("\nEndereco de x: %p", &x);
    int *p;
    printf("\nP: %p", p);
    p = &x;
    printf("\nP depois de receber enderco de x: %p", p);
    printf("\nP*: %d", (*p));
    printf("\nP&: %p", &p);

}