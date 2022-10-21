#include <stdio.h>

int main()
{
    int inicio, fin;

    printf("Los numeros impresos de 1 a : \n");
    scanf("%d", &fin);

    inicio =1;
    while(inicio<=fin)
    {
        printf("%d\n", inicio);
        inicio++;
    }

    return 0;
}

