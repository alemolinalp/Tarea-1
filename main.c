#include <estructuras.h>


int main()
{

    planeta * Saturno;
    Saturno = malloc(sizeof(planeta));
    strcpy(Saturno->nombre , "Saturno");   
    Saturno->starwars_code = 1812321;    
    Saturno->agua = 'F';  
    Saturno->oxigeno = 'F';
    
    planeta * Jupiter;
    Jupiter = malloc(sizeof(planeta));
    strcpy(Jupiter->nombre , "Jupiter");   
    Jupiter->starwars_code = 1752;    
    Jupiter->agua = 'F';  
    Jupiter->oxigeno = 'V';
    Jupiter->siguiente = Saturno;
    
    planeta * Tierra;
    Tierra = malloc(sizeof(planeta));
    strcpy(Tierra->nombre , "Tierra");   
    Tierra->starwars_code = 10001;    
    Tierra->agua = 'V';  
    Tierra->oxigeno = 'V';
    Tierra->siguiente = Jupiter;

    
    idioma * Espanol;
    Espanol = malloc(sizeof(idioma));
    strcpy(Espanol->nombre , "Espanol");
    Espanol->tipo = 'A';
    Espanol->simbolos = 27;
    
    idioma * Ingles;
    Ingles = malloc(sizeof(idioma));
    strcpy (Ingles->nombre , "Ingles");
    Ingles->tipo = 'B';
    Ingles->simbolos = 26;
    Ingles->siguiente = Espanol;
    
    alien * Superman;
    Superman = malloc(sizeof(alien));
    strcpy (Superman->nombre , "Clark");
    Superman->id = 1209;
    strcpy (Superman->especie , "Kriptoniano");
    Superman->planetas = Saturno;
    Superman->idiomas = Ingles;
    
    alien * Supergirl;
    Supergirl = malloc(sizeof(alien));
    strcpy (Supergirl->nombre , "Cara");
    Supergirl->id = 1209;
    strcpy (Supergirl->especie , "Kriptoniana");
    Supergirl->planetas = Tierra;
    Supergirl->idiomas = Espanol;
    
    
    printf(" \n \n Nombre del planeta: %s", Saturno->nombre );
    printf("\n Locación del planeta: %d", Saturno->starwars_code);   
    printf("\n Presencia de agua: %d", Saturno->agua);
    printf("\n Presencia de oxigeno: %d", Saturno->oxigeno);
    
    printf(" \n \n Nombre del planeta: %s", Jupiter->nombre );
    printf("\n Locación del planeta: %d", Jupiter->starwars_code);   
    printf("\n Presencia de agua: %d", Jupiter->agua);
    printf("\n Presencia de oxigeno: %d", Jupiter->oxigeno);
    
    printf(" \n \n Nombre del planeta: %s", Tierra->nombre );
    printf("\n Locación del planeta: %d", Tierra->starwars_code);   
    printf("\n Presencia de agua: %d", Tierra->agua);
    printf("\n Presencia de oxigeno: %d", Tierra->oxigeno);
    
    printf(" \n \n Idioma: %s", Espanol->nombre );
    printf("\n Tipo: %d", Espanol->tipo);   
    printf("\n Simbolos: %d", Espanol->simbolos);

    printf(" \n \n Idioma: %s", Ingles->nombre );
    printf("\n Tipo: %d", Ingles->tipo);   
    printf("\n Simbolos: %d", Ingles->simbolos);
    
    printf(" \n \n Nombre: %s", Superman->nombre );
    printf("\n ID: %d", Superman->id);   
    printf("\n Raza: %s", Superman->especie);
    
    printf(" \n \n Nombre: %s", Supergirl->nombre );
    printf("\n ID: %d", Supergirl->id);   
    printf("\n Raza: %s", Supergirl->especie);
    
    

    
  

   


    return 0;
}
