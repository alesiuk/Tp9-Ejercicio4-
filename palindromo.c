#include <stdio.h>
int palindromo(char *p1,char *p2);				//funcion que permite saber si una funcion es palindromo, es decir que se lea igual de atras para adelante y viceversa
int main (void)
{
	char string[]="neuquen";
	char*str1=&string[0];
	char*str2=&string[6];
	int resul=palindromo(str1,str2);
	if( resul==0)
	{
		printf("es palindromo\n");
		return 0;
	}
	else
	{
		printf("no es palindromo\n");
		return 0;
	}
	
}



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