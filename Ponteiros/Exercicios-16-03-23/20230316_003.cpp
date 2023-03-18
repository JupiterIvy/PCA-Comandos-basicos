
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

#define NULL 0


int main(){
	setlocale(LC_ALL, "");
	int **mat1, **mat2, i, j;
	int **soma;
	int m, n;
	srand(time(NULL));
	printf("Digite o n de linhas das duas matrizes: ");
	scanf("%d", &m);
	
	printf("Digite o n de colunas das duas matrizes: ");
	scanf("%d", &n);
	
	mat1 = (int**)malloc(m*sizeof(int*));
	mat2 = (int**)malloc(m*sizeof(int*));
	soma = (int**)malloc(m*sizeof(int*));
	
	for (i = 0; i < m; i++){
		mat1[i] = (int*)malloc(n*sizeof(int));
		mat2[i] = (int*)malloc(n*sizeof(int));
		soma[i] = (int*)malloc(n*sizeof(int));
	}
	
	for (i = 0; i < 2; i++){
		for (j = 0; j < 3; j++){
			mat1[i][j] = rand() % 50;
			mat2[i][j] = rand() % 50;
			soma[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	
	printf("Matriz 1\n");
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			printf("%2d ", mat1[i][j]);
		}
		printf("\n");
	}
	printf("Matriz 2\n");
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			printf("%2d ", mat2[i][j]);
		}
		printf("\n");
	}
	printf("Soma\n");
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			printf("%2d ", soma[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < n; i++){
		free(mat1[i]);
		free(mat2[i]);
		free(soma[i]);
	} 
	free(mat1);
	free(mat2);
	free(soma);
	
	return 0;
}


