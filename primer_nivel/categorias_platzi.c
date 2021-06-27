#include <stdio.h>

int main(void){
	
	int i;
	
	printf("Platzi cuenta con categorías de: \n");

	for (i = 1; i < 600; i++){
		printf("[Categoría %i]\n", i);
	}

	return 0;
}
