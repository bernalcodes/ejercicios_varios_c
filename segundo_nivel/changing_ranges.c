#include <stdio.h>

int main(void){
	
	int lim_s, lim_i, cmp;

	printf("Indique el límite superior: ");
	scanf("%i", &lim_s);

	printf("Indique el límite inferior: ");
	scanf("%i", &lim_i);

	printf("Indique un número para comparar: ");
	scanf("%i", &cmp);
	
	if (cmp >= lim_i && cmp <= lim_s){
		printf("%i está entre los límites establecidos.\n", cmp);	
	} else if (cmp > lim_s || cmp < lim_i){
		printf("%i no está entre los límites establecidos.\n", cmp);
	}

	return 0;
}
