#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "");
	int p, i, j;
	int aux = 1;
	
	printf("Digite um número:");
	scanf("%d",&p);
	printf("Cubo de %d = %d \n", p, p*p*p);
	for (i = 1; i <= p; i++){
		printf("soma dos ímpares: %d ", aux);
		for (j = 1; j < i; j++){
			printf("+ %d ", aux+2*j);
		}
		aux = aux+2*i;
		printf("\n");
	}
	
	return 0;
} 
