#include <stdio.h>

int main()
{

    int N;
    printf("ingrese el numero de filas: \n");
    scanf("%d",&N);
 
     for(int i=0; i < N; i++)
    {
        for(int j=0; j < N; j++)
        {
            printf("*");
        } //Ya no se puede usar la variable i porque ya esta en uso en el ciclo for anterior
        printf("\n");
    }
return(0);
}

