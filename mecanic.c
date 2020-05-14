/*
// NOMBRE DEL ARCHIVO: interfaz.h
// QUE HACE: este programa lo que hace es copiar lo ingresado por el usuario y ponerlo todo junto, es decir, sin espacios ni comas, solo letras. Por ejemplo "Hola, mama" lo copia en otra string como "holamama"
// QUIEN LO HIZO: micho_kpo
*/
#include <stdio.h>

#define ASCII 32

//void copy (char* , char* );




/*char *rs= "hola mama";		//Pueba de que anda
char seg[25];

void copy (char* , char*);

int main (void)
{
	
	char *ps;
	ps= seg;
	copy( ps, rs);
	printf("%s\n",seg);
return 0;
}

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////

//Prototipo: void copy (char* , char*);

void copy (char* p, char* s)				//La funcion recive dos punteros, uno a un string para copisrlo y otro el de la frase que escribe el usuario
{
    while ((*s)!='\0')					//Entonces, hasta encontrar el terminador, lo escrito por el usuario se copia ahi
    {
        if(((*s) >= 'a')&&((*s) <= 'z'))		//Si es letra, entonces, aumenta el puntero del string de copia y string el puntero del string del usuario
        {
            *p = (*s);					
            p++;
        }						//Sino, solo aumentame el string del usuario, no el de copia
        s++;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////

//Prototipo: int my_strlen(const char*);

int my_strlen(const char* puntero)			//Esta funcion calcula el largo del string copiado, se usa una funcion recursiva para sacar la longitud.
{
	if(*puntero != '\0')
	{
		return 0;
	}
	else
	{
		return my_strlen(puntero+1)+1;
	}
}


///////////////////////////////////////////////////////////////////////////////////////////////////////

//Prototipo: void mayus_minus(char* ,int );
//definiciones--> #define ASCI 32

void mayus_minus(char* j,int a)				//Esta funcion pasa las letras de la frases mayusculas a minusculas para poder compararlas en otra funcion
{
	int i;
	for(i=0;i<a;i++)
	{
		if(((*j) >= 'A')&&((*j) <= 'Z'))
		{
			*j += ASCII;			//ASCII=32
		}
		j++;
		i++;
	}
}




