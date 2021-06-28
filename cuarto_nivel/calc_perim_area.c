#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

int main(void){
	int opt, i;
	float side[10];
	float perimeter = 0;
	float area = 0;
	float apo;

	printf("Escoja una figura:\n1- Triángulo.\n2- Cuadrado.\n3- Pentágono.\n4- Hexágono.\n5- Salir.\n");
	printf("Su opción: ");
	scanf("%i", &opt);
	
	while (opt > 5 || opt < 1){
		printf("Indique una opción correcta.");
		scanf("%i", &scanf);
	}

	switch (opt){
		case 1:
			for(i = 0; i < 3; i++){
				printf("Indique la medida del lado %i: ", i + 1);
				scanf("%f", &side[i]);
				perimeter += side[i];
			}
			
			float semiperimeter = perimeter / 2;

			area = sqrt(semiperimeter*(semiperimeter-side[0])*(semiperimeter-side[1])*(semiperimeter-side[2]));

			printf("El perímetro del triángulo es de %.3f, y el área es de %.3f\n", perimeter, area);
			break;

		case 2:
			for (i = 0; i < 4; i++){
				printf("Indique la medida del lado %i: ", i + 1);
				scanf("%f", &side[i]);
				perimeter += side[i];
			}
			
			if (side[0] == side[1]){
				area = side[0] * side[0];
			} else {
				area = side[0] * side[1];
			}

			printf("El perímetro del cuadrado es de %.3f, y el área es de %.3f\n", perimeter, area);
			break;

			
		case 3:
			for (i = 0; i < 5; i++){
				printf("Indique la medida del lado %i: ", i + 1);
				scanf("%f", &side[i]);
				perimeter += side[i];
			}

			if (side[0] == side[1] && side[1] == side[2] && side[2] == side[3] &&  side[3] == side[4]){
				printf("Indique el valor del apotema del pentágono: ");
				scanf("%f", &apo);
				area = (5/2) * side[0] * apo;
			} else {
				printf("Los lado son diferentes, indique nuevamente la distancia de los lados: ");
				scanf("%f", side[0]);
				area = (5/2) * side[0] * apo;
			}
			
			printf("El perímetro del pentágono es de %.3f, y el área es de %.3f\n", perimeter, area);
			break;

		case 4:
			for (i = 0; i < 6; i++){
				printf("Indique la medida del lado %i: ", i + 1);
				scanf("%f", &side[i]);
				perimeter += side[i];
			}
			
			if (side[0] == side[1] && side[1] == side[2] && side[2] == side[3] &&  side[3] == side[4] && side[4] == side[5]){
				area = (3 * sqrt(3) * (side[0] * side[0])) / 2;
			} else {
				printf("Los lado son diferentes, indique nuevamente la distancia de los lados: ");
				scanf("%f", side[0]);
				area = (3 * sqrt(3) * (side[0] * side[0])) / 2;
			}

			printf("El perímetro del triángulo es de %.3f, y el área es de %.3f\n", perimeter, area);
			break;
		
		case 5:
			return 1;
			break;
	}

	return 0;
}
