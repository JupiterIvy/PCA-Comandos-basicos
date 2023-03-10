#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define NULL 0

int finder(char a[], char b, int* tam, int op[]){
	int i, k = 0;
	for (i = 0; a[i] != '\0'; i++){
		if (a[i] == b){
			op[k] = i;
			printf("%d ", op[k]);
			k++;
		}
	}
	*tam = k;
	return 0;
}


int main(){
	setlocale(LC_ALL, "");
	char word[5] = {'a','a','g','a','c'};
	char letter = {'a'};
	int tam = 0;
	int op[tam];
	
	finder(word, letter, &tam, op);
	printf("\ntamanho: %d", tam);
	return 0;
}


