#include <stdio.h>

int main(void){
	
	int name[20];
	int last[20];
	
	printf("Ingrese su nombre: \n");
	scanf("%s", &name);
	
	printf("Ingrese su apellido: \n");
	scanf("%s", &last);

	printf("Hola %s %s\n", name, last);

	return 0;
}
