#include <stdio.h>
#include <stdlib.h>

int main()
{

    int dinero;
    char tipo;
    int contador;
    int importeMayorEnDolares;
    int elPrimerDolar = 1;
    float promedioDePesos;
    int contadorPesos = 0;


    for(contador = 0; contador<5; contador++)
    {

        printf("Ingrese la cantidad de dinero: ");
        fflush(stdin);
        scanf("%d",&dinero);
        printf("Ingrese el tipo de moneda: ");
        fflush(stdin);
        scanf("%c",&tipo);

        while(!(tipo == 'p' || tipo == 'd' || tipo == 'l' || tipo == 'b'))
        {
            printf("Invalido, reingrese el tipo de moneda: ");
            fflush(stdin);
            scanf("%c",&tipo);
        }

        if(tipo == 'd')
        {
            if(elPrimerDolar == 1)
            {
                elPrimerDolar == 0;
                importeMayorEnDolares = dinero;
            }

            if(dinero>importeMayorEnDolares)
            {
                importeMayorEnDolares = dinero;
            }

        }

        if(tipo == 'p')
        {
            promedioDePesos += dinero;
            contadorPesos++;
        }


    }

    promedioDePesos = promedioDePesos / contadorPesos;



    printf("El dinero maximo en dolares es %d", importeMayorEnDolares);
    printf("El promedio de pesos es %f", promedioDePesos);

    return 0;




}
