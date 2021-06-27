#include <stdio.h>

int main(void){
	
	float mi, km;
	
	printf("Indique la cantidad de millas que desea convertir a kilómetros: ");
	scanf("%f", &mi);

	km = mi * 1.609344;
	
	printf("%.2f mi equivalen a %.2f km.\n", mi, km);

	return 0;
}
