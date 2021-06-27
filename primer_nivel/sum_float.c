#include <stdio.h>

int main(void){
	float a, b, sum;

	printf("Ingrese dos números separados por comas para sumarlos: \n");
	scanf("%f , %f", &a, &b);

	sum = a + b;

	printf("La suma de %f y %f es igual a %.2f\n", a, b, sum);

	return 0;
}
