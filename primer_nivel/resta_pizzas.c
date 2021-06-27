#include <stdio.h>

int main(void){
	
	int start, end, res;
	
	printf("Indique con cuántas rebanadas de pizza llega a la fiesta: ");
	scanf("%i", &start);
	
	printf("Indique cuántas rebandas de pizza ha consumido desde que llegó a la fiesta: ");
	scanf("%i", &end);

	res = start - end;

	printf("Le quedan un total de %i rebanadas.\n", res);

	return 0;
}
