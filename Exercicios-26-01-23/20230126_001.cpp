#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "");
	int a[10][10], b[10][10], soma[10][10];
	int i = 1, j = 1;
	int rd;
	srand(time(NULL));
	
	printf("Primeira Matriz: \n");
	
	for (i = 1; i <= 3; i++){
		for (j = 1; j <= 5; j++){
			rd = rand() % 100;
			a[i][j] = rd;
			printf("%3d ", a[i][j]);
		}
		printf("\n");
	}
	
	printf("Segunda Matriz: \n");
	
	for (i = 1; i <= 3; i++){
		for (j = 1; j <= 5; j++){
			rd = rand() % 100;
			b[i][j] = rd;
			printf("%3d ", b[i][j]);
		}
		printf("\n");
	}
	
	printf("Soma das duas matrizes: \n");
	for (i = 1; i <= 3; i++){
		for (j = 1; j <= 5; j++){
			soma[i][j] = a[i][j]+ b[i][j];
			printf("%5d", soma[i][j]);
		}
		printf("\n");
	}

	return 0;
}



