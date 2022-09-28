#include "main.h"
#include <stdio.h>

int main(void)
{
    float b,h,A = 0;

    printf("Introduzca la base del triangulo\n");
    scanf( "%f", &b);
    printf("Introduzca la altura del triangulo\n");
    scanf( "%f", &h);


    A = ((b*h)/2);
    printf("EL area del triangulo : %.2lf\n",A);
    
    return 0;
}
