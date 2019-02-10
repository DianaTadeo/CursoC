/*Programa para crear el cifrado de tipo one-time-pad
 * a partir de la generacion de carecteres aleatorios
 * para una llave y xor con la cadena original.
 * 
 * Aturor: DianaTadeo 
 * */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){
	FILE *original;
	FILE *llave;
	FILE *cifrado;
	char archivo[20];//el nombre del archivo que se desa cifrar
	if(argc>1){
		strcpy(archivo, argv[1]);
		/*Abrimos el archivo para leerlo*/
		original = fopen(argv[1],"r");
		/*Se crea el archivo para guardar la llave*/
		llave = fopen("llave", "a");
		/*Se crea el archivo para guardar el texto cifrado*/
		cifrado = fopen("cifrado", "a");
		char c;
		char randchar;
		char resx;
		srand(time(NULL));//generador de random
		while((c=fgetc(original)) != EOF){
			randchar=(char)(rand()%126) + 32;	
			fputc(randchar,llave);
			resx=randchar^c;
			//printf("%c", resx);
			fputc(resx,cifrado);
		}
		fclose(original);
		fclose(llave);
		fclose(cifrado);
	}else
		printf("Se debe ingresar un archivo como argumento.\n");
	return 0;
}
