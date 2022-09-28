#include <stdio.h>
#include <math.h> 
#include "main.h"

int main()
{
    float volumen;
    float costoAnterior;
    float densidad;
    char opcion;

    printf("Elija la opcion del tipo de producto: \n");
    printf("a - Aceite \n");
    printf("b - Alcohol \n");
    printf("c - Gasolina \n");
    printf("d - Acetona \n");
    scanf("%c",&opcion);

    printf("\nIngrese el volumen a envasar: \n");
    scanf("%f",&volumen);

    if (volumen == 500)
    {
        costoAnterior = 1.006;
    }
        else if (volumen == 1000)
        {
        costoAnterior = 1.6816;
        }
            else if (volumen == 1500)
            {
            costoAnterior = 1.9610;
            }   
                else if (volumen == 3000)
                {
                costoAnterior = 3.1038;
                }
    
    switch (opcion)
    {
        case 'a':
        densidad = 0.9;
        area (densidad,volumen,costoAnterior);
        break;
            case 'b':
            densidad = 0.8;
            area (densidad,volumen,costoAnterior);
            break;
                case 'c':
                densidad = 0.68;
                area (densidad,volumen,costoAnterior);
                break;
                    case 'd':
                    densidad = 0.79;
                    area (densidad,volumen,costoAnterior);
                    break;
        default:
        printf("Opcion no valida\n");
        return(1);
    }
}
