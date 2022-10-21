#include <stdio.h>

int main()
{
    int i, n;

    printf("Numero a imprimir sus numeros pares: ");
    scanf("%d", &n);

    printf("Los numeros pares de  %d son: \n", n);

    i=1;
    while(i<=n)
    {
        if(i%2==0)
        {
            printf("%d\n", i);
        }

        i++;
    }

    return 0;
}

