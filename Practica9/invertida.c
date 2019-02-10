#include<stdio.h>
#include<string.h>
int main(int argc,char ** argv){	
	char *inicia=argv[1];
	char *ultimo=inicia+(strlen(argv[1])-1);
	printf("Original: %s\n",argv[1]);
	printf("Invertida: ");
	for(;ultimo>=inicia;ultimo--){
			printf("%c",*ultimo);
	}
	printf("\n");
}
