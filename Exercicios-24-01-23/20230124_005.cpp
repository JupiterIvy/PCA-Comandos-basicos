#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "");
	int i = 1, j = 1, min ,v, n[v], aux, count = 1;
	int rd;
	srand(time(NULL));
	
	for (i = 1; i <= 6; i++){
		n[i] = 0;
	}
	
	printf("Digite a quantidade de vezes a lançar o dado: ");
	scanf("%d", &v);
	printf("jogadas aleatórias: \n");
	for (i = 1; i <= v; i++){
		rd = rand() % (6+1-1) + 1;
		n[rd]++;
		printf("%d ", rd);
	}
	
	for (i = 1; i <= 6; i++){
		printf("\nQuantidade de ocorrências em %d: %d \n", i, n[i]);
	}
	
}



