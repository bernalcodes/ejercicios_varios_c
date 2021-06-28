#include <stdio.h>

int main(void){
	int i, n;

	printf("¿Cuántas veces desea ver el mensaje? ");
	scanf("%i", &n);
	
	if (n == 0){
		printf("Escogió cero (0) veces. Adiós.\n");
		return 1;
	} else {
		for (i = 0; i < n; i++){
			printf("Mi curso favorito es introducción a lenguaje C (2019).\n");
		}
	}
	
	return 0;
}
