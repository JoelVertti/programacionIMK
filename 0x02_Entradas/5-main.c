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

    result = mult(N1,N2);
    printf("el valor de la multiplicacion es: %i\n",result);
    
    return 0;
}

