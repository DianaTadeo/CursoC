#include <limits.h>
#include <stdio.h>
#include <time.h>
/*
 * Programa que calcula la fecha del problema 2k38y
 * en la fecha exacta en la ciudad de Mexico
 * 
 * Autor: Diana Tadeo
 */
#define CST (-6)//Central Standard time

int main(){
	time_t actual = time(NULL);
	time_t rawtime;
	struct tm *info;
	time(&rawtime);
	info = gmtime(&rawtime );
	//printf("Fecha Ciudad de Mexico :\n %2d/%2d/%4d %02d:%02d:%02d",info->tm_mday,info->tm_mon,1900+info->tm_year,(info->tm_hour+CST)%24, info->tm_min,info->tm_sec);
	printf("Fecha actual:\n %s\n", asctime(localtime(&actual)));
	
	time_t final = (time_t)INT_MAX;
	info = gmtime(&final );
		
	printf("Fecha en que acaba el espacio para Unix en CDMX: \n");
	//printf("%2d/%2d/%4d %02d:%02d:%02d",info->tm_mday,info->tm_mon,1900+info->tm_year,(info->tm_hour+CST)%24, info->tm_min,info->tm_sec);
	printf("%s\n", asctime(localtime(&final)));
	return 0;
}
