/*
 * Programa que pide una palabra y la rota 13 posiciones*
 * en el abecedario mostrando el resultado.				*
 * Es funcional para mayusculas y minusculas.			*
 * 														*
 * Autor: Diana Tadeo									*
 */
#include <stdio.h>
#include <string.h>

/*
 * Funcion que rota la palabra que le es pasada e imprime
 * el resultado
 * palabra: La cadena que se desea rotar
 */
void rota ( char * palabra){
	int actual;
	int tam=strlen(palabra);
	/*se recorren los caracteres de la palabra/nombre*/
	for(int i=0;i< tam;i++){
		actual=palabra[i];//caracter actual
		/*si son minusculas*/
		if(97<=actual && actual<=122){
			/*si el actual + 13 pasa las letras el ascii*/
			if(palabra[i] >109)
				actual=96+(13-(122-actual));
			else
				actual=palabra[i]+13;//se hace la rotacion
			printf("%c",actual);
		/*si son minusculas*/
		}else if(65<=actual&&actual<=90){
			/*si el actual + 13 pasa las letras el ascii*/
			if(palabra[i] >77)
				actual=64+(13-(90-actual));
			else
				actual=palabra[i]+13;
			printf("%c",actual);
		}else
			printf("No se introdujeron caracteres validos\n");
	}
}

int main(int argc,char ** argv){
	char pal[10];
	scanf("%s",pal);
	printf("\n");
	rota(pal);
	printf("\n");
	
}
