#include <stdio.h>

int main(void){
	
	int num1, num2;

	printf("Indique dos números separados por una coma: ");
	scanf("%i, %i", &num1, &num2);

	if (num1 > num2){
		printf("%i es mayor que %i\n", num1, num2);
	} else if (num2 > num1){
		printf("%i es mayor que %i\n", num2, num1);
	} else {
		printf("%i es igual a %i\n", num1, num2);
	}
	
	return 0;
}
