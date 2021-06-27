#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	
	char name[20];
	char last[20];
	char country[20];
	
	int i;

	printf("Indique su nombre en letras minúsculas: ");
	scanf("%s", &name);

	printf("Indique su apellido en letras minúsculas: ");
	scanf("%s", &last);

	printf("Indique su país en letras minúsculas: ");
	scanf("%s", &country);

	name[0] = toupper(name[0]);
	last[0] = toupper(last[0]);
	country[0] = toupper(country[0]);

	printf("Nombre: %s.\nApellido: %s.\nPaís: %s.\n", name, last, country);

	return 0;
}
