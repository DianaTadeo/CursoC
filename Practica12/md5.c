/*																	*
 * Programa que devuelve el MD5 de una cadena que se le	pase		*
 * como argumento utiilizando la biblioteca de OpenSSL.				*
 * 																	*
 * Referencia: https://www.openssl.org/docs/man1.0.2/man3/MD2.html	*
 * 																	*
 * Autor: DianaTadeo												*
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#if defined(__APPLE__)
#  define COMMON_DIGEST_FOR_OPENSSL
#  include <CommonCrypto/CommonDigest.h>
#  define SHA1 CC_SHA1
#else
#  include <openssl/md5.h>
#endif

/*
 * funcion que calcula el MD5 de una cadena pasada
 * str: la cadena de la cual se desea calcular el md5
 * length: la longitud de la cadena.
 */
char *generaMD5(char *str, int length) {
    MD5_CTX c; //se genera el contexto
    unsigned char digest[16];
    char *res = (char*)malloc(33);
    /*Aun no entiendo bien que realizan las siguientes, pero sirven para manejar la
     * memoria y al final se calcula el hash.*/
    MD5_Init(&c);//inicializa el contexto
	MD5_Update(&c, str, length);//se agrega la cadena para calcular el hash
	MD5_Final(digest, &c);//se guarda el hash generado en el contexto y se borra este ultimo
    for (int i = 0;i <16; i++)
        snprintf(&(res[i*2]),16*2,"%02x",(unsigned int)digest[i]);//generamos el hexadecimal del resultado
    return res;
}


int main(int argc, char **argv) {
	if (argc >1){
        char *output=generaMD5(*(argv + 1), strlen(*(argv + 1)));
        printf("%s\n", output);
        free(output);
        return 0;
    }else
		printf("No se pas[o ninguna cadena como argumento\n");
	return 0;
}


