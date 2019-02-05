#include<stdio.h>
#include<string.h>
void rota ( char * palabra){
	int actual;
	int tam=strlen(palabra);
	for(int i=0;i< tam;i++){//se recorren los caracteres de la palabra/nombre
		actual=palabra[i];//caracter actual
		if(97<=actual && actual<=122){ //si son minusculas
			if(palabra[i] >109)//si el actual + 13 pasa las letras el ascii
				actual=96+(13-(122-actual));
			else
				actual=palabra[i]+13;//se hace la rotacion
			printf("%c",actual);
		}else if(65<=actual&&actual<=90){//si son maysculas
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
