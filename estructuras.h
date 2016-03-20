#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct alien_t{
    char nombre [30];
    int id;
    char especie [30];
    struct planetas_t * planetas;
    struct idiomas_t * idiomas;
    struct alien_t * siguiente;
}typedef alien;

struct planetas_t{
    char nombre[30];
    int starwars_code;
    char agua;
    char oxigeno;
    struct planetas_t * siguiente;
}typedef planeta;

struct idiomas_t{
    char nombre[30];
    char tipo;
    int simbolos;
    struct idiomas_t * siguiente;
    struct planetas_t * planetas;
}typedef idioma;
