#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palabra[10];
    char otraPalabra[10] = "chau";
    int largo;
    int comp;


    printf("Ingrese una palabra: ");
    fflush(stdin);   //para vacias el buffer (el buffer se llama "stdin"
    gets(palabra);  //cuando son cadenas de caracteres, usamos gets + nombre de vector

    strcat(palabra, otraPalabra);  //concatena las dos cadenas

    /*strupr(palabra); // convierte todo a mayuscula
    printf("%s", palabra);*/

    /*strlwr(palabra); // convierte todo a minuscula
    printf("%s", palabra);*/


    /*comp = strcmp(palabra, otraPalabra); //"strcmp" compara las palabras, si son iguales devuelve un cero   //"stricmp" ignora mayusculas de minusculas
    printf("\ncompara: %d", comp);*/


    largo = strlen(palabra);  // calcula el largo del vector


    printf("\nEl largo de la palabra es: %d", largo);

    return 0;
}

/*TAREA: definir
                char nombre[15];
                char apellido[15];
                char apellidoNombre[?];

        pedir datos al usuario y en la variable "apellidonombre" guardar:
        1-el apellido con la primera letra en mayuscula;
        2-una coma y un espacio que los separe;
        3-el nombre con la primer letra en mayuscula;
