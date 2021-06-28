#include <stdio.h>

int main(void){
	float num1, num2, res;
	int opt;

	printf("Indique el primer número: ");
	scanf("%f", &num1);
	
	printf("Indique el segundo número: ");
	scanf("%f", &num2);

	printf("Indique cuántos decimales desea ver (1 - 4): ");
	scanf("%i", &opt);
	
	res = num1 * num2;

	switch(opt){
		case 1:
			printf("El resultado es: %.1f\n", res);
			break;
		case 2:
			printf("El resultado es: %.2f\n", res);
			break;
		case 3:
			printf("El resultado es: %.3f\n", res);
			break;
		case 4:
			printf("El resultado es: %.4f\n", res);
			break;
		default:
			printf("El resultado es: %f\n", res);
	}

	return 0;
}
