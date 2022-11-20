#include <stdio.h>
#define MAX_SIZE 1000

int main()
{
    int arr[MAX_SIZE];
    int i, N, pos;
    
    printf("Ingrese la cantidad de numeros\n");
    scanf("%d", &N);
   
    printf("Ingrese %d numeros:\n ",N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Introduzca posicion a eliminar :\n ");
    scanf("%d", &pos);

    if(pos < 0 || pos > N)
    {
        printf("Valor incorrecto, Introduzca un valor entre 1 y %d", N);
    }
    else
    {
    
        for(i=pos-1; i<N-1; i++)
        {
            arr[i] = arr[i + 1];
        }
        N--;

        printf("Arreglo final \n ");
        for(i=0; i<N; i++)
        {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}


