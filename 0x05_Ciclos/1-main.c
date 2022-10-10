#include <stdio.h>

int main(void)
{
    int numero = 0;
    printf("ingrese numero hasta donde contar\n");
    scanf("%d", &numero);
    printf("inicia conteo...\n");

    for(int i=0; i<=numero; i++)
    {
        printf("%d\n",i);  
    }

    printf("finaliza conteo...\n");
    return(0);
}

