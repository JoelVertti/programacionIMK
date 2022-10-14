#include <stdio.h>

int main()
{
    int i;
    int n;

    printf("Imprimir todos los numeros pares de: ");
    scanf("%d", &n);

    printf("Los numeros pares de %d son: \n", n);

    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

