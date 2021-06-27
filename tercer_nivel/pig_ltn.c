#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	char word[60];
	char ini[1];
	int i;

	printf("Ingrese la palabra que desea traducida a pig latin: ");
	gets(word);
	
	if (word[0] == 'A' || word[0] == 'E' || word[0] == 'I' || word[0] == 'O' || word[0] == 'U'){
		word[0] = toupper(word[0]);
		printf("%sway.\n", word);
	} else {
		ini[0] = word[0];
		for (i = 0; i < strlen(word); i++){
			word[i] = word[i+1];
		}
		word[0] = toupper(word[0]);
		printf("%s%cay.\n", word, ini[0]);
	}

	return 0;
}
