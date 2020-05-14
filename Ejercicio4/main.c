/*
 main.c
 Este proyecto verifica si una cadena es un palindromo
 creado por el grupo 5
 */


#include <stdio.h>
#include <stdlib.h>
#include "definitions.h"

static void bienvenida (void);                //Da la bienvenida al usuario
static int entradaSN (void);                  //Provee una entrada minima de teclado para la confirmacion


int main(void) 
{
    bienvenida();
    int repeat = TRUE;
    int valid = FALSE;
    int lectura;
    
    while(repeat ==1)
    {
        while(valid == FALSE)
        {
            lectura = leer(&arr_ptr[0]);
            valid = ((leer == -1)? FALSE : TRUE);
        }
    }
    
    mayus_minus (&arr_ptr, contador);
    return (EXIT_SUCCESS);
}

static void bienvenida (void)
{
    int show_example;
    printf("este programa verifica si la cadena ingresada es un palindromo\n");
    print("puede ingresar cadenas de hasta 100 letras")
    printf("Desea ver ejemplos de palindromos (S/N)\n");
    
    show_example = entradaSN();
    
    if (show_example == TRUE)
    {
        printf("un ejemplo seria; se laminan animales\n");
    }
    
    DEJAR_UN_ESPACIO;
    
    
}
static int entradaSN (void)             //esta funcion ofrece una entrada minima de teclado 
{                                       //para una comprobacion 
    unsigned int c = 0;                 //inicio variable para la respuesta del usuario
    unsigned int terminador = 0;        //inicio vairable para ver si el terminador es un enter 
    unsigned int valido = 0;            //inicio una varible para ver la validez del caracter ingresado
    
    while(terminador != '\n')       //mientras el terminador no sea un enter este ciclo se va a seguir ejecutando
    {
        c = getchar();              //obtengo el caracter y el terminador 
        termindaor = getchar();
        valido((c == 'S')||(c == 's')||(c == 'n')||(c == 'N') ? 1 : 0);  //evaluo si el caracter es valido
        if (terminador != '\n' && valido == 0) //si el caracter es valido, dejo el terminador como esta y si es enter sale del while.
        {                                      //si no lo es, hago que el terminador sea cero y fuerzo la ejecucion
            while(c != '\n')                   // del ciclo 
            {
                c = getchar();
               
            }
           printf("la entrada no es valida, por favor ingrese S\N \n");    //si el terminador o el caracter pido al usuario que 
        }                                                                  // vuelva a confirmar
    }
    
    if ((c == 'S')||(c == 's'))
    {
        return TRUE;
    }
    return FALSE
}