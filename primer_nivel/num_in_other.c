#include <stdio.h>

int main(void){
	
	int grt, low, res;

	printf("Indique un número mayor a 1000 (mil): ");
	scanf("%i", &grt);
	printf("Indique un número menor a 100 (cien): ");
	scanf("%i", &low);

	res = grt / low;
	
	printf("%i cabe %i veces en %i.\n", low, res, grt);

	return 0;
}
