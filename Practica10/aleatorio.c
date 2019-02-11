/*
 *Programa que genera un numero pseudoaleatorio a partir
 *de llamadas al sistema para abrir /dev/random.
 * 
 * Autor: Diana Tadeo
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int fd;
	unsigned int *c = malloc(sizeof(unsigned int));
	char *arch = "/dev/random";
	fd = open(arch, O_RDONLY,S_IRUSR|S_IWUSR);
	read(fd, c, sizeof(unsigned int));
	close(fd);
	printf("%lu\n", *c%10);
	return 0;
}
