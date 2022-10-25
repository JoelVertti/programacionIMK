#include <stdio.h>
#include <math.h>

int main(void)
{
    float lado1, lado2, lado3;
    float area; 
    float perimetro;
    float sp;

    printf("Ingrese el valor del primer lado: \n");
    scanf("%f", &lado1);

    printf("Ingrese el valor del segundo lado: \n");
    scanf("%f", &lado2);

    printf("Ingrese el valor del tercer lado: \n");
    scanf("%f", &lado3);
   

    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado3 + lado2 > lado1)
    {
        perimetro = lado1 + lado2 + lado3;
        sp = (lado1 + lado2 + lado3)/2;
        area = (sqrt(sp*(sp - lado1)*(sp - lado2)*(sp - lado3)));

        printf("El perimetro es igual a %f\n", perimetro);
        printf("El area es igual a %f\n", area);
    }

            else{
                printf("ERROR\n");
            }

}

