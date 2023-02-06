#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>


int main(){
	setlocale(LC_ALL, "");
	int max = 200;
	int i, tam, maiusc;
	char word[max];

	printf("Digite uma frase (Máx 200): ");
	gets(word);
	
	for (i = 0; i < max; i++){
		if (word[i] == '\0'){
			tam = i;
			break;
		}
	}
	
	for (i = 0; i < tam; i++){
		maiusc = word[i] - ('a'-'A');
		maiusc += 3;
		printf("%c", maiusc);
	}
	
	
	return 0;
}
