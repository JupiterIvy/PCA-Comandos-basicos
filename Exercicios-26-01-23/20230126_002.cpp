#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#define max 100

void matrixSum(int a[max][max], int b[max][max], int sum[max][max], int m, int n){
	int i = 1, j = 1;
	
	printf("Soma das duas matrizes: \n");
	for (i = 1; i <= m; i++){
		for (j = 1; j <= n; j++){
			sum[i][j] = a[i][j]+ b[i][j];
			printf("%5d", sum[i][j]);
		}
		printf("\n");
	}
}


int main(){
	setlocale(LC_ALL, "");
	int a[max][max], b[max][max], soma[max][max], m, n;
	int i = 1, j = 1;
	int rd;
	srand(time(NULL));
	
	printf("Digite a quantidade de linhas: \n");
	scanf("%d", &m);
	
	printf("Digite a quantidade de colunas: \n");
	scanf("%d", &n);
	
	printf("Primeira Matriz: \n");
	
	for (i = 1; i <= m; i++){
		for (j = 1; j <= n; j++){
			rd = rand() % 100;
			a[i][j] = rd;
			printf("%3d ", a[i][j]);
		}
		printf("\n");
	}
	
	printf("Segunda Matriz: \n");
	
	for (i = 1; i <= m; i++){
		for (j = 1; j <= n; j++){
			rd = rand() % 100;
			b[i][j] = rd;
			printf("%3d ", b[i][j]);
		}
		printf("\n");
	}
	
	matrixSum(a, b, soma, m, n);

	return 0;
}



