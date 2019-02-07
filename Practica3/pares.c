/*
 * Programa que dice si un numero que es pasado en la		*
 * enstrada estandar es par o no en 1 linea con operaciones	*
 * a nivel de bits.											*
 *															*
 * Autor: Diana Tadeo										*
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc,char ** argv){
	if(argc>1)//si hay argumentos
		printf("%s",1&strtol(argv[1],NULL,10)?"No es par\n":"Si es par\n");//dice si es par
	else
		printf("Se debe introducir algun argumento\n");
	return 0;
}
