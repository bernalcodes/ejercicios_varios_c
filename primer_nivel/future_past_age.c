#include <stdio.h>

int main(void){
	
	int name[20];
	int age;

	printf("Indique su nombre y su edad: ");
	scanf("%s %i", &name, &age);
	
	printf("%s, el año pasado tenías %i años y el próximo año cumplirás %i años.\n", name, age-1, age+1);

	return 0;
}
