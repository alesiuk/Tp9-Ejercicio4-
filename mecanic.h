/*
Nombre de archivo: Bienvenida.h
Que hace: Le da la bienvenida al usurio al ejecutar el programa
Hecho por: micho_kpo123 del grupo 6
*/
#ifndef MECANIC_H
#define MECANIC_H
void copy (char* , char*);		//La funcion recive dos punteros, uno a un string para copisrlo y otro el de la frase que escribe el usuario
int my_strlen(const char*);		//Esta funcion calcula el largo del string copiado, se usa una funcion recursiva para sacar la longitud.
void mayus_minus(char* ,int );		//Esta funcion pasa las letras de la frases mayusculas a minusculas para poder compararlas en otra funcion
#endif
