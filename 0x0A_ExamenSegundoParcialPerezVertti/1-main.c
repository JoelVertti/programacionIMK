#include <stdio.h>

int main()
{
    int i, j; 
    int filas;

    printf("Introduzca el numero de filas : ");
    scanf("%d", &filas);

    for(i=1; i<=filas; i++)
    { 
    
        for(j=i; j<filas; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

