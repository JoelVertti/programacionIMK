#include <stdio.h>
#define MAX_SIZE 1000

int main()
{
    int arr[MAX_SIZE];
    int i, N, par, impar;

    printf("Ingrese la cantidad de numeros\n");
    scanf("%d", &N);

    printf("Ingrese %d numeros: ",N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    par = 0;
    impar  = 0;

    for(i=0; i<N; i++)
    {
        if(arr[i]%2 == 0)
        {
            impar++;
        }
        else
        {
            par++;
        }
    }

    printf("Numero total de numeros pares: %d\n", par);
    printf("Numero total de numeros impares: %d\n", impar);

    return 0;
}


