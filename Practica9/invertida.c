/*
 * Programa que imprime la cadena inversa	*
 * de una que se le pase como argumento sin *
 * variables auxiliares.					*
 * 											*
 * Autor: Diana Tadeo						*
 */
#include<stdio.h>
#include<string.h>
int main(int argc,char ** argv){	
	/* se guarda la primera posicion*/
	char *inicia=argv[1];
	/* se guarda la ultima posicion para saber el tamano de la cadena*/
	char *ultimo=inicia+(strlen(argv[1])-1);
	printf("Original: %s\n",argv[1]);
	/*Se imprime de atras hacia adelante*/
	printf("Invertida: ");
	for(;ultimo>=inicia;ultimo--){
			printf("%c",*ultimo);
	}
	printf("\n");
}
