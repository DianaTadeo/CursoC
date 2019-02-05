#include<stdlib.h>
#include<stdio.h>
int factorial(int n){
	if(n==1)
		return 1;
	else
		return n*factorial(n-1);
}
int main(int argc,char ** argv){
	int num= strtol(argv[1],NULL,10);
	int f= factorial(num);
	printf("%d",f);
}
