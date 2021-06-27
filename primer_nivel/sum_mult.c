#include <stdio.h>

int main(void){
	
	float a, b, c, res;

	printf("Datos de entrada: ");
	scanf("%f, %f, %f", &a, &b, &c);

	res = (a + b) * c;

	printf("Resultado: %.2f\n", res);

	return 0;
}
