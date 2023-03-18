
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

#define NULL 0


int main(){
	setlocale(LC_ALL, "");
	int **matriz, i, j;
	srand(time(NULL));
	
	matriz = (int**)malloc(2*sizeof(int*));
	
	for (i = 0; i < 2; i++){
		matriz[i] = (int*)malloc(3*sizeof(int));
	}
	for (i = 0; i < 2; i++){
		for (j = 0; j < 3; j++){
			printf("Digite o [%d][%d] elementos da matriz: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("Por ponteiros\n");
	for (i = 0; i < 2; i++){
		for (j = 0; j < 3; j++){
			printf("%2d ", *(*(matriz + i) + j));
		}
		printf("\n");
	}
	printf("Por indexes\n");
	for (i = 0; i < 2; i++){
		for (j = 0; j < 3; j++){
			printf("%2d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	for (i = 0; i < 3; i++){
		free(matriz[i]);
	} 
	free(matriz);
	
	return 0;
}


