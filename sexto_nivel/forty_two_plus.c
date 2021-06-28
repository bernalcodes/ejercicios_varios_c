#include <stdio.h>

int main(void){
	int num;

	do {
		printf("Ingrese un número: ");
		scanf("%i", &num);
		printf("\n");
	}
	while (num < 42);
	
	printf("Ciclo finalizado, %i es mayor a 42.\n", num);

	return 0;
}
