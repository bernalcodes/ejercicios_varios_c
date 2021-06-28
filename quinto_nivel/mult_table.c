#include <stdio.h>

int main(void){
	int num, i;

	printf("Indique el número del cual desea conocer la tabla: ");
	scanf("%i", &num);

	for (i = 0; i < 10; i++){
		printf("%i multiplicado por %i es igual a: %i.\n", num, i + 1, (num * (i + 1)));
	}

	return 0;
}
