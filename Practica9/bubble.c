#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>


/* Función para imprimir un arreglo de enteros*/
void printArray(int arr[], int tam){
    for (int i=0; i<tam; i++){
    	printf("%d, ",arr[i]);
    }
}

/* Función para imprimir un arreglo de acuerdo a sus apuntadores */
void printArrayPuntero(int *arr[], int tam){
    for (int i=0; i<tam; i++){
      printf("%d, ", *(arr[i]));
    }
}

/*
* Ordenamiento de buublesort con apuntadores
*/
void bubbleSort(int arr[],int *punteros[], int n){
	for (int i = 0; i < n-1; i++){
		for (int j = 0; j < n-i-1; j++){
			if (*(punteros[j]) > *(punteros[j+1])){
				int *temp = punteros[j];
				punteros[j] = punteros[j+1];
				punteros[j+1] = temp;
			}
		}
	}
}


int main(){
	int arreglo[10], i;
	int *punteros[10];
	time_t t;
	srand((unsigned) time(&t));
	for(i = 0; i < 10; ++i){
		arreglo[i] = rand() % 20 + 1;
		punteros[i] = &arreglo[i];
	}
	int *puntero;
	int n = sizeof(arreglo)/sizeof(arreglo[0]);
	printf("Arreglo generado aleatoriamente \n");
	printArray(arreglo, n);
	printf("\n");
	bubbleSort(arreglo, punteros, n);
	printf("Arreglo ordenado con bubblesort a traves de apuntadores\n");
	printArrayPuntero(punteros, n);
	printf("\n");
	return 0;
}
