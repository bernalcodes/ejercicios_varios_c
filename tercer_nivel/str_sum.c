#include <stdio.h>

int main(void){
	char name[20];
	char last[20];
	char food[50];

	printf("Indique su nombre: ");
	scanf("%s", &name);

	printf("Indique su apellido: ");
	scanf("%s", &last);

	printf("Indique su comida favorita: ");
	scanf("%s", &food);

	printf("\n");
	printf("Hola, mi nombre es %s %s y mi comida favorita es %s.\n", name, last, food);

	return 0;
}
