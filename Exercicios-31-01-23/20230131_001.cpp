#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

void maiusculo(int tam, char word[]){
	int i, maiusc;
	printf("\nConversão para maiusculo \n");
	for (i = 0; i < tam; i++){
		maiusc = word[i] - ('a'-'A');
		printf("%c", maiusc);
	}
}

void inverte(int tam, char word[]){
	int i;
	printf("\nPalavra invertida \n");
	for (i = tam; i >= 0; --i){
		printf("%c", word[i]);
	}
}

void seeCh(int tam, char word[], char chr){
	int i, count = 0;
	printf("\nCaractere em String \n");
	for (i = 0; i < tam; i++){
		if (chr == word[i]){
			count++;
		}
	}
	if (count > 0){
		printf("Caractere encontrado %d vezes", count);
	}else{
		printf("Caractere não encontrado");
	}
}

void deleteCh(int tam, char word[], char chr){
	int i, j = 0;
	char aux[tam];
	printf("\nApagar caractere em String \n");
	for (i = 0; i < tam; i++){
		if (chr != word[i]){
			aux[j] = word[i];
			j++;
		}
	}
	printf("%s", aux);
	
}

int main(){
	setlocale(LC_ALL, "");
	int max = 20;
	int i, tam;
	char word[max],chr;

	printf("Digite uma palavra (Max=50): ");
	scanf("%s", word);
	printf("Digite um caractere: ");
	chr = getch();
	
	for (i = 0; i < max; i++){
		if (word[i] == '\0'){
			tam = i;
			break;
		}
	}
	inverte(tam, word);
	maiusculo(tam, word);
	seeCh(tam, word,chr);
	deleteCh(tam,word,chr);
	
	
	return 0;
}
