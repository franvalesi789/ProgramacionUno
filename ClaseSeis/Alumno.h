#include <stdio.h>
#include <string.h>

#define LIBRE 0
#define OCUPADO 1

typedef struct
{

    int dia;
    int mes;
    int anio;
} eFecha;

typedef struct
{
    int idLocalidad;
    char localidad[30];
    int codigoPostal;
} eLocalidad;

typedef struct
{
    int legajo;
    char nombre[29];
    float promedio;
    int idLocalidad;
    int estado;
} eAlumno;

typedef struct
{
    int idMateria;
    char descripcionMateria[29];
    int cargaHoraria;
} eMateria;

typedef struct
{
    int legajo;
    int idMateria;
    int fechaInscripcion;
} eInscripcion;

eAlumno cargarAlumno(void);
void mostrarUnAlumno(eAlumno);
int buscarLibre(eAlumno*, int);
void cargarListadoAlumnos(eAlumno[], int);
void mostrarListadoAlumnos(eAlumno[], int);
void hardCodearAlumnos(eAlumno[], int);
void sortStudentsByNameAndAverage(eAlumno[], int);

int eliminarAlumno(eAlumno[], int);
int modificarAlumno(eAlumno[], int, int);

int buscarAlumnoPorLegajo(eAlumno[], int, int);
void mostrarAlumnoPorLocalidad(eAlumno[],int,eLocalidad[],int);
int buscarAlumnoPorLocalidad(eLocalidad [], int, int);
void hardCodearMaterias(eMateria[], int);
void mostrarMaterias(eMateria[], int);
