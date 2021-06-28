#include <stdio.h>

int main(void){
	float total;

	while (total < 50){
		printf("Ingrese un número: ");
		scanf("%f", &total);
		total += total;
		printf("\n");
	}
	
	printf("El total es: %f\n", total);

	return 0;
}
