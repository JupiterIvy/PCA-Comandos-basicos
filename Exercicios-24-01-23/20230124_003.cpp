#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void evenPrint(int n[], int tam){
	int i;
	for (i = 0; i < tam; i++){
		if (n[i]%2==0){
			printf("%d ", n[i]);
		}
	}
}

int main(){
	setlocale(LC_ALL, "");
	int n[100], i, tam;
	
	printf("Digite a quantidade de n�meros: ");
	scanf("%d", &tam);
	
	for (i = 0; i < tam; i++){
		printf("Digite um n�mero: ");
		scanf("%d", &n[i]);
		
		while (n[i] > 100){
			printf("N�mero inv�lido \nDigite um n�mero: ");
			scanf("%d", &n[i]);
		}
	}
		
	evenPrint(n, tam);
		
	return 0;
}



