#include <stdlib.h>
#include <stdio.h>
int main(int argc,char ** argv){
	if(argc>1)
		printf("%s",1&strtol(argv[1],NULL,10)?"No es par\n":"Si es par\n");
}
