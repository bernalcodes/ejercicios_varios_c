#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

int main(void){
	float rad, depth, vlm;

	printf("Indique el radio del cilindro: ");
	scanf("%f", &rad);

	printf("Indique la profundidad del cilindro: ");
	scanf("%f", &depth);

	vlm = M_PI * (rad * rad) * depth;

	printf("El volumen del cilindro es igual a: %.1f\n", vlm);
	
	
	return 0;
}
