#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	char frag[100];
	int ini, fin, i, diff;

	printf("Indique una oración con más de 10 caracteres: ");
	gets(str);
	
	while(strlen(str) < 10){
		printf("Longitud menor a la indicada, intente nuevamente: ");
		gets(str);
	}

	printf("Indique el límite inferior: ");
	scanf("%i", &ini);

	printf("Indique el límite superior: ");
	scanf("%i", &fin);

	diff = fin - ini;
	
	for (i = 0; i <= diff; i++){
		frag[i] = str[ini]; 
		ini++;
	}
	
	printf("El resultado es: %s.\n", frag);
	
	return 0;
}
