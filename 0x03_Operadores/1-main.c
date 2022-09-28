#include "main.h"
#include <stdio.h>

int main(void)
{
    float result = 0;
    float Largo = 0;
    float Ancho = 0;
    printf("Introduzca la medida del largo del rectangulo\n");
    scanf( "%f", &Largo );
    printf("Introduzca la medida del ancho del rectangulo\n");
    scanf( "%f", &Ancho );

    result = perimetro(Largo,Ancho);
    printf("El perimetro del rectangulo es : %.2f\n",result);
    
    return 0;
}
