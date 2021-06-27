#include <stdio.h>

int main(void){
	
	int limit, cmp;

	printf("Indique el número límite: ");
	scanf("%i", &limit);

	printf("Indique el número que desea comparar: ");
	scanf("%i", &cmp);

	if (limit > cmp){
		printf("%i se encuentra dentro del rango, gracias.\n", cmp);
	} else if (cmp > limit){
		printf("%i excede el límite permitido.\n", cmp);
	} else {
		printf("Ambos números son iguales.\n");
	}
	
	return 0;
}
