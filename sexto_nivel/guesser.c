#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(NULL));
	int secret = rand() % 101;
	int guess, attempt;

	printf("Intente adivinar. Indique un número: ");
	scanf("%i", &guess);
	
	attempt = 0;

	do {
		if (guess > secret){
			printf("Es menor. Intente nuevamente: ");
			scanf("%i", &guess);
			attempt++;
		} else if (guess < secret){
			printf("Es mayor. Intente nuevamente: ");
			scanf("%i", &guess);
			attempt++;
		}
	}

	while (guess != secret);

	printf("Acertó. El número es %i. Le tomó %i intentos.\n ", secret, attempt);

	return 0;
}
