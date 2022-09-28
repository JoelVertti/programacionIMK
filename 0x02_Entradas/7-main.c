#include "main.h"
#include <stdio.h>

int main(void)
{
    int result = 0;
    int N1 = 0;
    int N2 = 0;
    printf("Introduzca un numero\n");
    scanf( "%i", &N1 );
    printf("Introduzca otro numero\n");
    scanf( "%i", &N2 );

    result = mod(N1,N2);
    printf("el resultado del modulo de %d y %d es: %i\n",N1,N2,result);
    
    return 0;
}