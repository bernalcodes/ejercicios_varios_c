#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

int main(void){
	float rad, area;
	
	printf("Indique el radio del círculo: ");
	scanf("%f", &rad);
	
	area = M_PI * (rad * rad);

	printf("El área del círculo es de: %.3f.\n", area);

	return 0;
}
