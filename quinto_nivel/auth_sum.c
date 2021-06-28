#include <stdio.h>

int main(void){
	float nums[10];
	float total;
	int i, opt;
	
	for (i = 0; i < 4; i++){
		printf("Indique el número %i: ", i + 1);
		scanf("%f", &nums[i]);
		
		printf("\n");
		
		printf("¿Desea sumarlo al total?:\n1- Sí.\n2- No.\n");
		printf("Su opción: ");
		scanf("%i", &opt);

		if (opt == 1){
			total += nums[i];
		} else if (opt == 2) {
			total = total;
		}

		printf("\n");
	}

	printf("El total es: %f\n", total);

	return 0;
}
