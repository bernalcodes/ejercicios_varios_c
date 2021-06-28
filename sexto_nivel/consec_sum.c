#include <stdio.h>

int main(void){
	float num[100];
	float num1, num2, total;
	int opt, i;

	i = 0;

	printf("Ingrese un número: ");
	scanf("%f", &num1);
	
	printf("\n");

	printf("Ingrese otro número: ");
	scanf("%f", &num2);
		
	total += num1 + num2;

	printf("\n");

	do {
		printf("¿Desea añadir otro número?\n1- Sí.\n2- No.\n");
		printf("Su opción: ");
		scanf("%i", &opt);
		
		printf("\n");

		if (opt == 1){
			printf("Ingrese el siguiente número: ");
			scanf("%f", &num[i]);
		
			total += num[i];
			i++;
		} else if (opt == 2){
			break;
		}

		printf("\n");
	}

	while (opt == 1);
	
	printf("El resultado es igual a: %f.\n", total);

	return 0;
}
