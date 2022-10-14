#include <stdio.h>

int main()
{
    int i, n;
    int suma=0;

    printf("Introduzca numero a sumar de sus numeros impares: ");
    scanf("%d", &n);

    for(i=1; i<=n; i+=2)
    {
        suma += i;
    }

    printf("La suma de los numeros impares es = %d\n", suma);

    return 0;
}

