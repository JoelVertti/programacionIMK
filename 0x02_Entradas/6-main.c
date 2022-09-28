#include "main.h"
#include <stdio.h>

int main(void)
{
    float result = 0;
    int N1 = 0;
    int N2 = 0;
    printf("Introduzca un numero\n");
    scanf( "%d", &N1 );
    printf("Introduzca otro numero\n");
    scanf( "%d", &N2 );

    result = div(N1,N2);
    printf("el valor de la division es: %.2f\n",result);
    
    return 0;
}
