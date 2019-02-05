#include<stdio.h>
#include<string.h>
int main(int argc,char ** argv)
{
	char pass[15];
	char passIntento[20];
	printf("Ingresa un password \n");
	scanf("%s",pass);
	int n=0;
	do{
	printf("Ingresa el password que escribiste \n");
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
