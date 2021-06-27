#include <stdio.h>

int main(void){
	
	float day, hr, min, sg;

	printf("Indique la cantidad de días: ");
	scanf("%f", &day);

	hr = day*24;

	min = hr*60;

	sg = min*60;

	printf("Esto equivale a:\nDías: %.0f\nHoras: %.2f\nMinutos: %.2f\nSegundos: %.2f\n", day, hr, min, sg);
	
	return 0;
}
