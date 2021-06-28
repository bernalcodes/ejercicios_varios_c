#include <stdio.h>
#include <string.h>

int main(void){
	char animal[20];
	int i, j, n, len;
	
	printf("Indique su animal favorito: ");
	gets(animal);

	printf("Indique la cantidad de veces que quiere verlo en columna: ");
	scanf("%i", &n);
	
	len = strlen(animal);

	for (i = 0; i < n; i++){
		for (j = 0; j < len; j++){
			if (animal[j] == animal[len - 1]){
				printf("%c\n", animal[j]);
				printf("\n");
			} else {
				printf("%c\n", animal[j]);
			}
		}
	}

	return 0;
}
