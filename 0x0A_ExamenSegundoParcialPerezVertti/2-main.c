#include <stdio.h>

int main()
{
    int MINhablados;
    int horaINICIO;
    char DiaSem;
    float costoLlamada;
    int programa=1;
    int opcion;

    while(programa==1)
    {
        printf( "-Introduzca dia de la semana : \n ");
        scanf( "%s", &DiaSem );
        
        printf( "-Introduzca hora en la que inicio la llamada en formato 24hrs : \n ");
        scanf( "%d", &horaINICIO );

        printf( "-Introduzca la duracion de la llamada en minutos : \n ");
        scanf( "%d", &MINhablados );

        if(DiaSem=='L'||DiaSem=='l'||DiaSem=='M'||DiaSem=='m'||DiaSem=='X'||DiaSem=='x'||DiaSem=='J'||DiaSem=='j'||DiaSem=='V'||DiaSem=='v')
        {
                if (horaINICIO>=600 && horaINICIO<=1800)
                    {
                    costoLlamada= (MINhablados * 0.60);
                    }
                    else if (horaINICIO>=001 && horaINICIO<=600||horaINICIO>=1800 && horaINICIO<=2400 ) 
                            {
                            costoLlamada= (MINhablados * 0.80);   
                            }
                             
        printf( "El costo de la llamada es de :%.2f $ pesos\n ",costoLlamada);
        }

        else if(DiaSem=='S'||DiaSem=='s'||DiaSem=='D'||DiaSem=='d')
        {                    
            costoLlamada= (MINhablados * 0.25);  
            printf( "El costo de la llamada es de :%.2f $ pesos\n ",costoLlamada);
        }               
        else
        {
            printf("Algun dato ingresado es incorrecto\n");
        }   

        printf("°Para hacer otra consulta de llamada ingrese 1 para Si, 2 para terminar la consulta\n");
        scanf("%d",&opcion);

        if(opcion==2)
        {
            programa++;
        }
    }
}



