/*																
 * Programa que realiza un bubblesort (ordenamiento de burbuja)	*
 * utilizando apuntadores.										*
 * 																*
 * Autor: Diana Tadeo											*
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>


/* 
 * Función para imprimir un arreglo de enteros
 */
void printArray(int arreglo[], int tam){
    for (int i=0; i<tam; i++){
    	printf("%d, ",arreglo[i]);
    }
}

/* 
 * Función para imprimir un arreglo de acuerdo a sus apuntadores 
 */
void printArrayPuntero(int *arreglo[], int tam){
    for (int i=0; i<tam; i++){
      printf("%d, ", *(arreglo[i]));
    }
}

/*
 * Ordenamiento de buublesort con apuntadores
 */
void bubbleSort(int *ptrs[], int n){
	for (int i = 0; i < n-1; i++){
		for (int j = 0; j < n-i-1; j++){
			if (*(ptrs[j]) > *(ptrs[j+1])){
				int *temp = ptrs[j];
				ptrs[j] = ptrs[j+1];
				ptrs[j+1] = temp;
			}
		}
	}
}


int main(){
	int arreglo[10], i;
	int *ptrs[10];
	time_t t;
	srand((unsigned) time(&t));
	/*Se rellena de el arreglo con enteros aleatorios*/
	for(i = 0; i < 10; ++i){
		arreglo[i] = rand() % 20 + 1;
		ptrs[i] = &arreglo[i];
	}
	int *puntero;
	int n = sizeof(arreglo)/sizeof(arreglo[0]);
	printf("Arreglo generado aleatoriamente: \n");
	printArray(arreglo, n);
	printf("\n");
	bubbleSort(ptrs, n);
	printf("Arreglo ordenado con bubblesort a traves de apuntadores:\n");
	printArrayPuntero(ptrs, n);
	printf("\n");
	return 0;
}
