#include <stdio.h>
#include <string.h>

int main(void){
	char curso[100];
	
	int i, len;

	printf("Indique el nombre de su curso favorito: ");
	gets(curso);
	
	len = strlen(curso);
	
	printf("\n");

	for (i = 0; i < len; i++){
		printf("%c\n", curso[i]);
	}

	return 0;
}
