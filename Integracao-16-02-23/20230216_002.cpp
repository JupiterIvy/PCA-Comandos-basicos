#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <time.h>


int preencher(int vet[], int tam){
	int i;
	printf("\ndigite o tamanho do vetor: ");
	scanf("%d", &tam);
	vet[0] = tam;
	for (i = 1; i <= tam; i++){
		printf("digite o elemento: ");
		scanf("%d", &vet[i]);
	}
	return vet[0];
}
int intersec(int vet1[], int vet2[], int sec[], int tam1, int tam2){
	int i, j, k = 1;
	int count = 0;
	if (tam1 > tam2){
		for (i = 1; i <= tam1; i++){
			for (j = 1; j <= tam2; j++){
				if (vet1[i] == vet2[j]){
					sec[k] = vet1[i];
					k++;
					count++;
				}
			}
		}
	}else{
		for (i = 1; i <= tam2; i++){
			for (j = 1; j < tam1; j++){
				if (vet2[i] == vet1[j]){
					sec[k] = vet2[i];
					k++;
					count++;
				}
			}
		}
	}
	
	sec[0] = count;
	return sec[count+1];
}


int main(){
	setlocale(LC_ALL, "");
	int n, m, l = 0;
	int a[n], b[m], c[l];
	int i, j, k;
	
	preencher(a, n);
	n = a[0];
	preencher(b, m);
	m = b[0];
	printf("Interseccão: \n");
	intersec(a, b, c, n, m);
	printf("tamanho de sec: %d\n", c[0]);
	for (j = 1; j <= c[0]; j++){
		printf("%d ", c[j]);	
	}
	
	return 0;
}
