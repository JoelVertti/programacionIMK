#include <stdio.h>

int main()
{
    int i, n;
    int suma = 0;

    printf("Introduzca numero a sumarlos: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        suma += i;
    }

    printf("La suma de %d y sus numeros naturales es = %d\n", n, suma);

    return 0;
}

