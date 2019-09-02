#include <stdio.h>
#include <stdlib.h>

void CambiarPorValor(int unDato);
void CambiarPorReferencia(int* pDato);
int DameUnEntero(char*, int max, int, int*);
int EstaEntreRangos(int superior, int inferior, int elNumero;


int main()
{
    int numero;
    int sePudo;

    sePudo = DameUnEntero("Ingresa tu edad: ", 100, 2, & numero);
    if(sePudo == 0)
    {
        printf("No se pudo cargar.");
    }
    else
    {
        printf("Tu edad es: %d", numero);
    }

    if(estaEntreRangos(100,0,22)==0)
    {

    }else{
    }
     if(estaEntreRangos(100,0,unNumero)==0)
    {

    }else{

    }

    /*CambiarPorValor(numero);
    printf("numero por valor = %d \n", numero);


    CambiarPorReferencia(& numero);
    printf("numero por referencia = %d", numero);*/

    return 0;
}

/*void CambiarPorValor(int unDato)
{

    unDato = 99;
    printf("dato por valor = %d \n", unDato);
}
void CambiarPorReferencia(int* pDato)
{

    *pDato = 99;
    printf("dato por referencia = %d \n", *pDato);
}*/

int DameUnEntero(char* mensaje, int max, int cantidad, int *pNumero)
{
    int contador = 0;
    printf("%s", mensaje);
    scanf("%d", pNumero);

    while(*pNumero > max)
    {
        if(contador == cantidad)
        {
            return 0;
        }
            contador++;
            printf("%s", mensaje);
            scanf("%d", pNumero);

        }
            return 1;
}
int EstaEntreRangos(int superior, int inferior, int elNumero)
{
        if(elNumero<superior && elNumero>inferior)
    {
        return 0;
    }
    return 1;
}


