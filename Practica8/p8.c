#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc,char ** argv){
	printf("%c\n",*(*(argv+(argc-1))+strlen(*(argv+(argc-1))-1)));
}
