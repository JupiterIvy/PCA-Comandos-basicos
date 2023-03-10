#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define NULL 0

int ordena(int* a, int* b, int* c){
	int aux, i;
	
	for (i = 0; i < 3; i++){
		if (*a > *b){
			aux = *b;
			*b = *a;
			*a = aux;
		}
		if(*b > *c){
			aux = *c;
			*c = *b;
			*b = aux;
		}
		if(*a > *c){
			aux = *c;
			*a = *c;
			*c = aux;
		}
	}
	if (*a == *b && *b == *c){
		return 1;
	}else {
		return 0;
	}
}

int main(){
	setlocale(LC_ALL, "");
	int a = 1;
	int b = 1;
	int c = 1;
	printf("Resultado: %d\n", ordena(&a, &b, &c));
	printf("%d %d %d", a, b, c);
	
	return 0;
}


