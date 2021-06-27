#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char TURTLE[10] = "tortuga";

int main(void){
	
	char turt[10];
	int i;

	printf("Ingrese el nombre de su animal favorito: ");
	scanf("%s", &turt);
	
	//printf("strlen() == %li\n", strlen(turt));

	/*if (strlen(turt) == strlen(TURTLE)){
		printf("Igual longitud.\n");
	}*/
		
	for (i = 0; i < strlen(turt); i++){
		if (isupper(turt[i]) == 0){
			turt[i] = turt[i];
		} else {
			turt[i] = tolower(turt[i]);
		}
	}

	if (strcmp(turt, TURTLE) == 0){
		printf("También me gustan las tortugas.\n");
	} else {
		printf("Ese animal es genial, pero prefiero las tortugas.\n");
	}
	
	return 0;
}
