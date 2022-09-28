#include <stdio.h>
#include <math.h> 
#include "main.h"

int area(float densidad, float volumen, float costoAnterior)
{
    float radio;
    float costoMejorado;
    float costoMts2 = 2.45;
    float alturaEnvase;
    float area;
    float AreaMin;
    float grs;
    float ahorro;
    
    radio = (cbrt((2*(volumen))/(4*(3.1416))));
    AreaMin = (2*(3.1416)*(pow(radio,2)))+(2*(3.1416)*(radio))*(volumen/((3.1416)*(pow(radio,2))));
    alturaEnvase = ((3.1416)*(pow(radio,2))/volumen);
    area = (2*(3.1416)*(pow(radio,2)))+(2*(3.1416)*(radio)*(alturaEnvase));
    costoMejorado = (AreaMin * costoMts2);
    costoMejorado = (costoMejorado / 1000);
    grs = (densidad * volumen);
    ahorro = (costoAnterior - costoMejorado);


    printf("El radio de la lata fue de: %.3f cm\n",radio);
    printf("Area total de la lata: %.3f cm2\n",AreaMin);
    printf("Costo de fabricacion: $ %.2f pesos\n",costoMejorado);
    printf("Costo anterior : $ %.2f pesos\n",costoAnterior);
    printf("Usted ahorro : $ %.2f pesos\n",ahorro);
    printf("%.2f mL en gramos es: %.2f grs\n",volumen,grs);

    return 0;

}

