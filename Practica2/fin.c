#include <limits.h>
#include <stdio.h>
#include <time.h>

#define CST (-6)

int main(){
	
	time_t current_date = time(NULL);
	time_t rawtime;
	struct tm *info;
	time(&rawtime);
	info = gmtime(&rawtime );
	printf("Fecha Ciudad de Mexico : %2d/%2d/%4d %02d:%02d:%02d",info->tm_mday,info->tm_mon,1900+info->tm_year,(info->tm_hour+CST)%24, info->tm_min,info->tm_sec);
	printf("\n%s\n", asctime(localtime(&current_date)));
	
	time_t last_day = (time_t)INT_MAX;
	info = gmtime(&last_day );
		
	printf("\nFecha en que acaba el espacio para Unix en CDMX: \n");
	printf("%2d/%2d/%4d %02d:%02d:%02d",info->tm_mday,info->tm_mon,1900+info->tm_year,(info->tm_hour+CST)%24, info->tm_min,info->tm_sec);
	printf("\n%s\n", asctime(localtime(&last_day)));
	return 0;
}
