/*
 input.c 
 Este archivo posee todas las funciones necesarias para poder leer el teclado y obtener las cadenas 
 */
#include <stdio.h>
#include "input.h"


 int leer (char* arr_ptr)
{
    int input = FALSE;
    int contador = 0;       //incializo una variable que la voy a usar como contador saber si se excede la cantidad maxima permitida
    char c =0;
    
    while(input != TRUE)
    {
       c = getchar();                 //obtengo el caracter 
       
       if(c != '\n')
       {
          if(contador == ARR_MAX) //si el contador de caracteres es igual al maximo posible y el caracter no es un enter,se excedio la capacidad de entrada
          {
              printf("se excedio el maximo permitido de entrada\n");
              while(c != '\n')  //limpio el stdin 
              {
                  c=getchar();
              }
              return -1;
          }
          
          if(c != ' '&& c!=',') //se excluyen los espacios de las cantidad de digitos que se pueden ingresar 
          {
              arr_ptr[contador++] = c; //guardo en caracter en el arreglo y aumento el contador de caracteres
          }
    
       }
       
       else
       {
           
           input = TRUE; //si se recibe un enter es porque se dejo de leer 
           if(contador == 0)
           {                         //si la entrada estaba vacia devuelvo un -1 para indicar que hubo un error
               printf("no ha ingresado ninguna cadena, pruebe otra vez. \n");
               return -2;
           }
       }
    }
    
    return contador;
    
}



