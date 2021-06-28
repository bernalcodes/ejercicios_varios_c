#include <stdio.h>

int main(void){
	float num1, num2, res;

	printf("Indique el primer número: ");
	scanf("%f", &num1);

	printf("Indique el segundo número: ");
	scanf("%f", &num2);

	res = num1 * num2;

	printf("El resultado es: %f\n", res);

	return 0;
}
