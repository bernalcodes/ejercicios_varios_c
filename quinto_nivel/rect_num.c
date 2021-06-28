#include <stdio.h>

int main(void){
	int limit, i;

	printf("Indique el límite de la recta númerica: ");
	scanf("%i", &limit);

	if (limit > 0){
		
		for (i = 0; i <= limit; i++){
			if (i == limit){
				printf("%i.\n", i);
			} else {
				printf("%i, ", i);
			}
		}
		
		printf("\n");

	} else if (limit < 0){
		
		for (i = 0; i >= limit; i--){
			if (i == limit){
				printf("%i.\n", i);
			} else {
			printf("%i, ", i);
			}
		}
		
		printf("\n");
	} else {
		printf("Ha escogido cero (0). Adiós.\n");
	}
	
	return 0;
}
