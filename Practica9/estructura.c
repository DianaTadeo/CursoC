/*
 * Practica sobre una estructura
 * 
 * Autor: Diana Tadeo
 */
#include <stdio.h>

struct instructor{
	char *nombre;
	char *curso[20];
	int edad;
	char *carisma;
};

/*
 * Funcion que imprime una estrucutra de tipo
 * instructor
 */
void imprimeInstructor(struct instructor i){
	printf("El instructor: %s\n",i.nombre);
	printf("El curso: %s\n",i.curso[0]);
	printf("La edad %d\n",i.edad);
	printf("El carisma: %p\n",i.carisma);
}

struct instructor ins(struct instructor i){
	i.nombre="Fernando";
	i.curso[0]="c";
	i.edad=28;
	i.carisma=NULL;
	return i;
}


int main(){
	struct instructor il;
	imprimeInstructor(ins(il));
}
