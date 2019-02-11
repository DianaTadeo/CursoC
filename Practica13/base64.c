/*																			*
 * Programa que codifica una cadena que se pasa como argumento a Base 64	* 
 * con OpenSSL.																*
 * 																			*
 * Referencia: https://www.openssl.org/docs/man1.0.2/man3/BIO_f_base64.html	*
 * Autor: Diana Tadeo														* 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/bio.h>
#include <openssl/evp.h>
#include <openssl/buffer.h>
#include <assert.h>

/*
 * funcion que calcula el base64 de una cadena dada
 * str: la cadena que se planea codificar
 * res: donde se guardara el resultado 
 */
int base64(const unsigned char* str, char** res) {
	BIO *bio, *b64;
	BUF_MEM *bufferPtr;
	size_t length = strlen(str);
	b64 = BIO_new(BIO_f_base64());
	bio = BIO_new(BIO_s_mem());
	bio = BIO_push(b64, bio);
	BIO_set_flags(bio, BIO_FLAGS_BASE64_NO_NL);
	BIO_write(bio, str, length);
	BIO_flush(bio);
	BIO_get_mem_ptr(bio, &bufferPtr);
	BIO_set_close(bio, BIO_NOCLOSE);
	BIO_free_all(bio);
	*res=(*bufferPtr).data;
	return (0);
}

int main(int argc, char **argv){
	char *digest;
	if (argc >1){
		base64(*(argv + 1), &digest);
		printf("%s\n", digest);
	}else
		printf("No se paso ninguna cadena como argumento\n");

	return 0;
}

