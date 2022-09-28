#include "main.h"
#include <stdio.h>

int main(void)
{
    float result1 = 0;
    float result2 = 0;
    float result3 = 0;
    float radio = 0;

    printf("Introduzca el radio del circulo\n");
    scanf( "%f", &radio );
    result1 = areaCirculo(radio);
    printf("El area del circulo es : %.2f\n",result1);
    
    result2 = diametroCirculo(radio);
    printf("El diametro del circulo es : %.2f\n",result2);

    result3 = circunferenciaCirculo(radio);
    printf("La circunferencia del circulo es : %.2f\n",result3);


    return 0;
}