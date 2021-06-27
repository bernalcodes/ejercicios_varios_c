#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	char name[100];
	char last[100];

	printf("Ingrese su nombre: ");
	gets(name);

	name[0] = toupper(name[0]);

	if (strlen(name) > 5){
		printf("Hola, %s\n", name);
	} else {
		printf("Indique su apellido, por favor: ");
		gets(last);
		
		last[0] = toupper(last[0]);

		printf("\n");
		printf("Hola %s %s\n", name, last);
	}
	
	return 0;
}
