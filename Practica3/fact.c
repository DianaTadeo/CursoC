#include<stdlib.h>
#include<stdio.h>
int factorial(int n){
	if(n==1)
		return 1;
	else
		return n*factorial(n-1);
}
int main(int argc,char ** argv){
	if(argc>1){
		int num= strtol(argv[1],NULL,10);
		int f= factorial(num);
		printf("%d",f);
	}else
		printf("Se debe introducir algun argumento\n");
}
