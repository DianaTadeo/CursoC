#include <stdlib.h>
#include <stdio.h>

int fibonacci(int n){
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fibonacci(n-1)+fibonacci(n-2);
}

int main(int argc,char ** argv){
	int num= strtol(argv[1],NULL,10); //se le pasa la posicion como argumento
	int f= fibonacci(num);
	printf("Fibonacci en la posicion %d: %d \n",num,f);
}
