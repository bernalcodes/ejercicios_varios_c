#include <stdio.h>

int main(void){
	int opt;
		
	printf("Ingrese una opción entre 1 y 6: ");
	scanf("%i", &opt);

	switch(opt){
		case 1:
			printf("Hoy aprenderemos sobre programación.\n");
			break;
		case 2:
			printf("¿Qué tal tomar un curso de marketing digital?\n");
			break;
		case 3:
			printf("Hoy es un gran día para comenzar a aprender diseño.\n");
			break;
		case 4:
			printf("¿Y si aprendemos algo de negocios online?\n");
			break;
		case 5:
			printf("Veamos un par de clases sobre producción audiovisual.\n");
			break;
		case 6:
			printf("Tal vez sea bueno desarrollar una habilidad blanda en Platzi.\n");
			break;
		default:
			printf("Opción errada.\n");
	}

	return 0;
}
