#include "main.h"
#include <stdio.h>

int main(void)
{
    int a,b,c = 0;

    printf("Introduzca los dos angulos del triangulo\n");
    scanf( "%d%d", &a, &b );

    c = 180-(a+b);
    printf("El angulo faltante mide : %d\n",c);
    
    return 0;
}
