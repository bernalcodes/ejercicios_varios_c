#include <stdio.h>

int main(void){
	
	float bill, ppl, total, divide_bill;
	float tip = 0.20;
	float tax = 0.19;
	
	printf("Indique el valor total a pagar y el número de personas que realizarán el pago: ");
	scanf("%f", &bill);
	
	printf("\n");

	printf("Indique la cantidad de personas que van a pagar: ");
	scanf("%f", &ppl);

	printf("\n");

	total = (bill * tip) + (bill * tax) + bill;
	
	printf("El total + propina es de: %.2f\n", (bill*tip)+bill);
	printf("El total + impuestos es de: %.2f\n", (bill*tax)+bill);
	printf("El total incluyendo ambos es de: %.2f\n", total);
	printf("Cada persona debe pagar: %.2f\n", total/ppl);	
		
	return 0;
}
