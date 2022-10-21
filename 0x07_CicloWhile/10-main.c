#include <stdio.h>

int main()
{
    int i, n, sum=0;

    printf("Introduzca un numero: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sum += i;
    }

    printf("La suma de sus numeros naturales es = %d \n", n, sum);

    return 0;
}

