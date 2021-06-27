#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	char up[100];
	char low[100];
	int i;	
	
	printf("Indique la  palabra que desea convertir a mayúscula: ");
	gets(up);

	printf("Indique la palabra que desea convertir a minúscula: ");
	gets(low);
	
	for (i = 0; i < strlen(up); i++){
		up[i] = toupper(up[i]);
	}

	for (i = 0; i < strlen(low); i++){
		low[i] = tolower(low[i]);
	}

	printf("%s\n", up);

	printf("%s\n", low);
	
	return 0;
}
