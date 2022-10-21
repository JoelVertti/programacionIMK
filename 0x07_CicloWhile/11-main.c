#include <stdio.h>
 
int main()
{
    int i, n, sum=0;
 
    printf("Introduzca un numero: ");
    scanf("%d", &n);
 
    i = 1;
    while(i<=n)
    {
        sum += i;
        i += 2;
    }
 
    printf("La suma de los numeros impares de %d = %d\n ", n, sum);
 
    return 0;
}

