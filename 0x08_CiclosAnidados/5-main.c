#include<stdio.h>

int main()
{
    int i, j, N, columna;

    printf("Introduzca numero de columnas:");
    scanf("%d",&N);

    columna=1;

    for(i=1;i<N*2;i++)
    {
        for(j=1; j<=columna; j++)
        {
            printf("*");
        }

        if(i < N)
        {
            columna++;
        }
        else
        {
            columna--;
        }
        printf("\n");
    }

    return 0;
}

