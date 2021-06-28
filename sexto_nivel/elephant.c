#include <stdio.h>

int main(void){
	int num, i, j;
	
	i = 1;
		
	for (j = 0; j < 10; j++){
		
		if (i == 1){	
			printf("%i elefante se balanceaba\nSobre la tela de una araña\nComo veía que resistía\nFue a llamar otro elefante.\n", i);
		} else if (i > 1) {
			printf("%i elefantes se balanceaban\nSobre la tela de una araña\nComo veía que resistía\nFueron a llamar otro elefante.\n", i);
		}

		if (i == 10){
			printf("\n");
			break;
		}

		printf("\n");
	
		printf("Indique cuántos elefantes más se van a balancear: ");
		scanf("%i", &num);
		
		printf("\n");

		while (num != i + 1){
			printf("Error. Intente nuevamente: ");
			scanf("%i", &num);
			printf("\n");
		}
		i++;
	}

	return 0;
}
