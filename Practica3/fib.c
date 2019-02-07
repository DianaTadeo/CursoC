/*														*
 * Programa que calcula el n-esimo numero numero de 	*
 * fibonacci de manera recursiva, donde n se le pasa	*
 * como argumento al programa.							*
 * 														*
 * Autor: Diana Tadeo									*
 */
#include <stdlib.h>
#include <stdio.h>

/*funcion que calcula el n-esimo numero de fibonacci*/
int fibonacci(int n){
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fibonacci(n-1)+fibonacci(n-2);
}

int main(int argc,char ** argv){
	if(argc>1){// Verifica si hay argumentos de entrada
		int num= strtol(argv[1],NULL,10); //se le pasa la posicion como argumento
		int f= fibonacci(num);
		printf("Fibonacci en la posicion %d: %d \n",num,f);
	}else
		printf("Se debe introducir algun argumento\n");
	return 0;
}
