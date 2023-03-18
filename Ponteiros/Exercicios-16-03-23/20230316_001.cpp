
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

#define NULL 0

int* aloca(int qtd){
	srand(time(NULL));
	int i, *arr, rd;
	arr = (int*)malloc(qtd*sizeof(int));
	if (arr != NULL){
		for(i = 0; i < qtd; i++){
			rd = rand() % 50;
			arr[i] = rd;
			printf("%d ", arr[i]);
		}
		return arr;
	}else{
		printf("\nOperação não concluída");
	}
}


int ordena(int* arr, int qtd){
	int i, j, aux;
	printf("\n");
    for (i = 1; i < qtd; i++) {
        for (j = 0; j < qtd - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
}


int main(){
	setlocale(LC_ALL, "");
	int* arr, i, qtd;
	
	printf("Digite a quantidade de elementos: ");
	scanf("%d", &qtd);
	arr = aloca(qtd);
	
	ordena(arr, qtd);
	printf("\nMenor valor de arr: %d",arr[0]);
	printf("\nMaior valor de arr: %d",arr[qtd-1]);
	free(arr);
	return 0;
}


