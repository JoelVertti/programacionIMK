#include <stdio.h>
#define MAX_SIZE 1000

int main()
{
    int arr[MAX_SIZE];
    int i, N, num, pos;

    printf("Ingrese la cantidad de numeros\n");
    scanf("%d", &N);
   
    printf("Ingrese %d numeros:\n ",N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Introduzca numero a insertar al arreglo:\n");
    scanf("%d", &num);
    printf("Introduzca posicion a insetar al arreglo:\n" );
    scanf("%d", &pos);

    if(pos > N+1 || pos <= 0)
    {
        printf("Valor incorrecto, Introduzca un valor entre 1 y %d", N);
    }
    else
    {
        for(i=N; i>=pos; i--)
        {
            arr[i] = arr[i-1];
        }
        
        arr[pos-1] = num;
        N++; 

        printf("Arreglo final:\n ");
        for(i=0; i<N; i++)
        {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}

