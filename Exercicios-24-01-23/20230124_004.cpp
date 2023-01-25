#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void fatorialPrint(int n[], int tam){
	int i, j, count = 1, m[tam];
	for (i = 0; i < tam; i++){
		for (j = n[i]; j > 0; --j){
			count *= j;
			m[i] = count;
		}
		count = 1;
		printf("%d \n", m[i]);
	}
}

int main(){
	setlocale(LC_ALL, "");
	int n[100], i, tam;
	
	printf("Digite a quantidade de números: ");
	scanf("%d", &tam);
	
	for (i = 0; i < tam; i++){
		printf("Digite um número: ");
		scanf("%d", &n[i]);
		
		while (n[i] > 100){
			printf("Número inválido \nDigite um número: ");
			scanf("%d", &n[i]);
		}
	}
		
	fatorialPrint(n, tam);
		
	return 0;
}



