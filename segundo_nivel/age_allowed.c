#include <stdio.h>

int main(void){
	int age;

	printf("Indique su edad: ");
	scanf("%i", &age);
	
	if (age > 0 && age < 18){
		printf("¿Sabes hacia dónde dirigir tu futuro? Seguro puedo ayudarte.\n");
	} else if (age >= 18 && age <= 29){
		printf("Es un momento excelente para impulsar tu carrera.\n");	
	} else if (age >= 30){
		printf("Nunca es tarde para aprender, ¿Qué curso tomaremos?\n");
	} else {
		printf("Ingrese un dato correcto.\n");
	}
	return 0;
}
