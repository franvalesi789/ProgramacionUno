#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palabra[10];


    printf("Ingrese una palabra: ");
    fflush(stdin);   //para vacias el buffer (el buffer se llama "stdin"
    gets(palabra);  //cuando son cadenas de caracteres, usamos gets + nombre de vector

    printf("%s", palabra);


    return 0;
}
