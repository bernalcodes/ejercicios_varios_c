#include <stdio.h>

int strlen(char str);

int main(void){
	
	char str[100];
	int i;

	printf("Ingrese el nombre de su curso favorito: ");
	scanf("%s", &str);
	
	for(i = 0; str[i] != '\0'; i++);

	printf("El string tiene longitud de %i caracteres.\n", i);

	return 0;
}
