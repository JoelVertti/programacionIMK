#include <stdio.h>

int main(void)
{
    int N1 = 0;
    float prom = 0;
    int cantidad = 0;
    int acumulado = 0;

    printf("ingrese el numero de materias a promediar\n");
    scanf("%d", &cantidad);

    for(int i=0; i<cantidad; i++)
    {
        printf("ingrese calificacion\n"); 
        scanf("%d", &N1);
        acumulado = N1 + acumulado;
        printf("el acumulable hasta el momento es de:%d\n", acumulado);

    }
    prom = (acumulado/cantidad);
    printf("el promedio es: %.2lf\n",prom);

    return(0);
}

