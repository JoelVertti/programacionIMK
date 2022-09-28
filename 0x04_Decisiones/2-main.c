#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Introduzca dos numeros:");
    scanf("%d%d",&num1, &num2);

    if (num1 > num2) 
     {
        printf("El primer numero es mayor\n");
     }
    else if (num1 == num2)
     {
        printf("Ambos numeros son iguales\n");
     }
    else
     {
        printf("El segundo numero es mayor\n");
     }

    return 0;
}
