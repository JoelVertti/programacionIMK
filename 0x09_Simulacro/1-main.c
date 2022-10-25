#include<stdio.h>
int main()

{

float LitrosConsumidos, galones, MILLASrecorridas, millasXgalon;

while(MILLASrecorridas && LitrosConsumidos <= 1);
{
    printf("Ingrese la cantidad de litros consumidos durante su trayecto \n");
    scanf("%f",&LitrosConsumidos);

    printf("Ingrese la cantidad de millas recorridas durante su trayecto \n");
    scanf("%f",&MILLASrecorridas);

        if(LitrosConsumidos>0)
        {
        galones = (LitrosConsumidos * 0.264179);
        millasXgalon = (galones / MILLASrecorridas);
        

printf("El recorrido en millas por galon es de  %f \n",millasXgalon);
printf("Litros en galones es %f \n",galones);
        }
else
{
printf("valores incorrectos \n");
}        

}
}
