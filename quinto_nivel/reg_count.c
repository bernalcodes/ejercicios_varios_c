#include <stdio.h>

int main(void){
	int num, i;

	printf("Indique el inicio de la cuenta regresiva: ");
	scanf("%i", &num);

	if (num < 0){
		for (i = num; i <= 0; i++){
			printf("%i\n", i);
		}
	} else if (num > 0) {
		for (i = num; i >= 0; i--){
			printf("%i\n", i);
		}
	} else {
		printf("Usted ha escogido cero (0). Adiós.\n");
	}
	
	return 0;
}
