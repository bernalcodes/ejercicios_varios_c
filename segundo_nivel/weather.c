#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char yes[5] = "si";
const char no[5] = "no";

int main(void){
	char opt1[10];
	char opt2[10];
	
	printf("¿Está lloviendo?: ");
	gets(opt1);

	if (strcmp(opt1, yes) == 0){
		printf("¿Está haciendo mucho viento?: ");
		gets(opt2);
		if (strcmp(opt2, yes) == 0){
			printf("Hace mucho viento para salir con una sombrilla.\n");
		} else if (strcmp(opt2, no) == 0){
			printf("Lleva una sombrilla.\n");
		} else {
			printf("Opción errada, adiós.\n");
		}
	} else if (strcmp(opt1, no) == 0){
		printf("Te deseo un bonito día.\n");
	} else {
		printf("Opción errada, adiós.\n");
	}
	
	return 0;
}
