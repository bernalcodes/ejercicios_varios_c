#include <stdio.h>
#include <string.h>

int main(void){
	int i, num_inv, opt;
	char inv[100];
	
	printf("Ingrese el nombre del invitado: ");
	scanf("%s", &inv[0]);

	num_inv = 1;
	i = 1;
	
	printf("\n");

	do {
		
		printf("¿Desea invitar a alguien más?\n1- Sí.\n2- No.\n");
		printf("Su elección: ");
		scanf("%i", &opt);
		
		printf("\n");
		
		if (opt == 2){
			break;
		} else if (opt == 1){
			
			printf("Ingrese el nombre del invitado: ");
			scanf("%s", &inv[i]);
		
			num_inv++;
			i++;

			printf("\n");
		}
	}

	while (opt == 1);

	printf("En total asistirán %i invitados.\n", num_inv);

	return 0;
}
