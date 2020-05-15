//MECANIC.C
//CONTIENE EL MECANISMO NECESARIO PARA QUE EL PROGRAMA EVALUE LA CADENA INGRESADA POR EL USUARIO
#include <stdio.h>

#define ASCII 32

int palindromo(char *p1,char *p2)			//la funcion devolvera, un 0 si es palindromo o un 1 si no lo es
{
	if(p1>=p2)						//caso base, es el caso en el que los dos punteros queden apuntando al mismo lugar , o cuando p1 sea mas grande que p2	
	{
		return 0;
	}	
	else if (*p1==*p2)					//solo se hara la parte recursiva, en el caso de que las letras sean iguales, ya que si no son iguales no sera palindromo
	{
		 return palindromo(++p1,--p2);	//caso recursivo, se vuelve a llamar la funcion pero con los punteros corridos
	}
	else 							//si las letras no son iguales , no es palindromo
	{
		return 1;
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////
void mayus_minus(char* j,int a)				//Esta funcion pasa las letras de la frases mayusculas a minusculas para poder compararlas en otra funcion
{
	int i;
	for(i=0;i<a;i++,j++)
	{
		if(((*j) >= 'A')&&((*j) <= 'Z'))
		{
			*j += ASCII;			//ASCII=32
		}
	}
}




