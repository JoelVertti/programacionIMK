#include <stdio.h>

#define MAX_SIZE 1000

int main()
{
    int arr[MAX_SIZE]; 
    int i, N, suma = 0;

    printf("Ingrese la cantidad de numeros\n");
    scanf("%d", &N);

    printf("Ingrese %d numeros: \n",N);

    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<N; i++)
    {
     
        if(arr[i] < 0)
        {
            suma++;
        }
    }

    printf("Numero total de numeros negativos = %d \n", suma);

    return 0;
}

