#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>


int main(){
	setlocale(LC_ALL, "");
	int max = 20;
	int i, tam,count = 0;
	char word[max],inversa[max];

	printf("Digite uma frase (M�x 20): ");
	gets(word);
	
	for (i = 0; i < max; i++){
		if (word[i] == '\0'){
			tam = i;
			break;
		}
	}
	strcpy(inversa, word);
	strrev(inversa);
	count = strcmp(word, inversa);

	if (count == 0)
	   printf("\n� pal�ndromo");
	else
	   printf("\nn�o � pal�ndromo");
	
	return 0;
}
