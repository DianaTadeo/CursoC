#include<stdio.h>
#include<string.h>
void rota ( char * palabra){
	int actual;
	int tam=strlen(palabra);
	for(int i=0;i< tam;i++){
		actual=palabra[i];
		if(97<=actual && actual<=122){
			if(palabra[i] >109)
				actual=96+(13-(122-actual));
			else
				actual=palabra[i]+13;
			printf("%c",actual);
		}else if(65<=actual&&actual<=90){
			if(palabra[i] >77)
				actual=64+(13-(90-actual));
			else
				actual=palabra[i]+13;
			printf("%c",actual);
		}else
			printf("No se introdujeron caracteres validos\n");
	}
}
char *p={"Hola, Vedo \n"};
int main(int argc,char ** argv){
	char pal[10];
	scanf("%s",pal);
	printf("\n");
	rota(pal);
	printf("\n");
	
}
