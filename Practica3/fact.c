/*														*
 * Programa que calcula el factorial del numero que		*
 * se le pase en la entrada estandar de forma recursiva	*
 * 														*
 * Autor: Diana Tadeo									*
 */
#include <stdlib.h>
#include <stdio.h>
 
 /*
  * funcion recursiva que calcula el factorial
  * de un numero n que se le pase como argumento
  */
int factorial(int n){
	if(n==1)
		return 1;
	else
		return n*factorial(n-1);
}

int main(int argc,char ** argv){
	if(argc>1){// Verifica si hay argumentos de entrada
		int num= strtol(argv[1],NULL,10);
		int f= factorial(num);
		printf("%d",f);
	}else
		printf("Se debe introducir algun argumento\n");
	return 0;
}
