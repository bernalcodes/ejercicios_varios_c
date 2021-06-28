#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

int main(void){
	int num1, num2;

	printf("Ingrese el primer número: ");
	scanf("%i", &num1);

	printf("Ingrese el segundo número: ");
	scanf("%i", &num2);

	int div = num1/num2;

	int mod = num1%num2;
	
	printf("%i dividido entre %i es %i y sobra %i.\n", num1, num2, div, mod);

	return 0;
}
