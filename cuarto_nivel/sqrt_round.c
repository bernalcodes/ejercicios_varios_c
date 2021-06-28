#include <stdio.h>
#include <math.h>

int main(void){
	float num, res;

	while (num < 20){
		printf("Indique un número mayor a 20: ");
		scanf("%f", &num);
	}

	res = sqrt(num);

	printf("La raíz cuadrada de %f es: %.3f.\n", num, res);

	return 0;
}
