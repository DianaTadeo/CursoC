/*
 * Programa que compara una cadena con un password		*
 * y dice si es correcto, de lo contrario permite 		*
 * relaizar un intento nuevamente (3 intentos en total)	*
 * 
 * Autor: Diana Tadeo									*
 */
#include <stdio.h>
#include <string.h>

int main(){
	//char *pass={"hola123.,"};
	char pass[15];
	char passIntento[20];
	printf("Ingresa el password para guardar \n");
	scanf("%s",pass);
	int n=0;
	do{
	printf("Ingresa el password\n");
	scanf("%s",passIntento);
		if(strcmp(passIntento,pass)==0){
			printf("Exito\n");
			break;
		}
		else
			n++;
	}
	while(n<3);
}
