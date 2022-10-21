#include <stdio.h>

int main()
{
    int i, n;

    printf("Introduzca numeros impares a imprimir: ");
    scanf("%d", &n);

    printf("Los numeros impares de %d son: \n", n);

    
    for(i=1; i<=n; i++)
    {

        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

