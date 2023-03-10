#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define NULL 0
void troca(float* a, float* b){
	float aux;
	aux = *a;
	*a = *b;
	*b = aux;
}


int main(){
	setlocale(LC_ALL, "");
	float a = 4.5;
	float b = 9;
	
	printf("a: %.1f\n", a);
	printf("b: %.1f\n", b);
	printf("\n TROCA \n\n");
	troca(&a, &b);
	printf("a: %.1f\n", a);
	printf("b: %.1f\n", b);
	
	return 0;
}


