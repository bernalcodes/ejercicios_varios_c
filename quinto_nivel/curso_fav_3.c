#include <stdio.h>

int main(void){
	int i, n;
	
	printf("¿Cuántas veces desea ver el mensaje? ");
        scanf("%i", &n);
   
        if (n == 0){
        	printf("Escogió cero (0) veces. Adiós.\n");
                return 1;
        } else if (n > 15){
		printf("Escogió un número muy grande.\n");

                for (i = 0; i < 3; i++){
                	printf("Mi curso favorito es introducción a lenguaje C (2019).\n");
                }
        } else {
                for (i = 0; i < n; i++){
                	printf("Mi curso favorito es introducción a lenguaje C (2019).\n");
                }
        }
	
	return 0;
}
