/*
 main.c
 Este proyecto verifica si una cadena es un palindromo
 creado por el grupo 5
 */


#include <stdio.h>
#include <stdlib.h>
#include "definitions.h"
#include "input.h"
#include "palindromo.h"
#include "mecanic.h"

static void bienvenida (void);                //Da la bienvenida al usuario
static int entradaSN (void);                  //Provee una entrada minima de teclado para la confirmacion
char arr_ptr[ARR_MAX];                        //Defino el arreglo donde guardo los caracteres

int main(void) 
{
    bienvenida();
    int repeat = TRUE;
    int valid = FALSE;
    int lectura;
    
    while(repeat == TRUE)
    {
        while(valid == FALSE)       //mientras que la entrada no sea valida 
        {
            lectura = leer(&arr_ptr[0]);  //obtengo los datos de la entrada 
            
           
            valid = (((lectura == -1)||(lectura == -2))? FALSE : TRUE); //si recibo un -1 es que hubo un error y la entrada no es valida
            
        }
        
    
    
    mayus_minus (&arr_ptr[0], lectura);             //le paso a la funcion un puntero al comienzo del arreglo y la cantidad de letras que posee
    
    int palin;
    
    palin = palindromo(&arr_ptr[0],&arr_ptr[lectura-1]); //le paso a la funcion un puntero con el primer y el ultimo elemento
    
    if (palin == 0)                             //si es cero es porque la cadena ingresada era un palindromo
    {
        printf("la cadena es palindromo \n");
        
    }
    else 
    {
        printf("la cadena ingresada no es palindromo \n");  //caso contrario la cadena no es un palindromo
    }
    
    
    printf("presione enter para salir. \n");
    
    char c= getchar();
    if(c = '\n')
    {
        repeat = FALSE;
        printf("gracias por utilizar el progrma \n");
    }
    }
    
    return (EXIT_SUCCESS);
}

static void bienvenida (void)
{
    int show_example;
    printf("este programa verifica si la cadena ingresada es un palindromo\n");
    printf("puede ingresar cadenas de hasta 100 letras \n");
    printf("Desea ver ejemplos de palindromos (S/N)\n");
    
    show_example = entradaSN();     //si lo que devolvio es un 1 es porque el usuario ingreso una S e imprimo lo siguiente
    
    if (show_example == TRUE)    
    {
        printf("un ejemplo seria; se laminan animales\n");
    }
    
    DEJAR_UN_ESPACIO;
    
    printf("por favor introduzca una cadena\n");
    
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
        terminador = getchar();
        valido = ((c == 'S')||(c == 's')||(c == 'n')||(c == 'N')) ? 1 : 0;  //evaluo si el caracter es valido
        terminador = (valido == 1) ? terminador : 0;
        if (terminador != '\n' && valido == 0) //si el caracter es valido, dejo el terminador como esta y si es enter sale del while.
        {                                      //si no lo es, hago que el terminador sea cero y fuerzo la ejecucion
            while(c != '\n')                   // del ciclo 
            {
                c = getchar();
               
            }
           printf("la entrada no es valida, por favor ingrese S/N. \n");    //si el terminador o el caracter pido al usuario que 
        }                                                                  // vuelva a confirmar
    }
    
    if ((c == 'S')||(c == 's'))     //una vez comprobado que es valido, si el caracter es s o S devuelvo un 1 
    {
        return TRUE;
    }
    return FALSE;   //caso contrario devuelvo un cero
}