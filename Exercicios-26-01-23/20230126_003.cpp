#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>


int main(){
	setlocale(LC_ALL, "");
	int a[5][5], mul[5][5] ;
	int i = 1, j = 1, x;
	int rd;
	srand(time(NULL));
	
	printf("Digite um escalar: \n");
	scanf("%d", &x);

	printf("Matriz 3x3: \n");
	
	for (i = 1; i <= 3; i++){
		for (j = 1; j <= 3; j++){
			rd = rand() % 100;
			a[i][j] = rd;
			printf("%3d ", a[i][j]);
		}
		printf("\n");
	}
	
	printf("Multiplicação por escalar: \n");
	
	for (i = 1; i <= 3; i++){
		for (j = 1; j <= 3; j++){
			mul[i][j] = a[i][j] * x;
			printf("%3d ", mul[i][j]);
		}
		printf("\n");
	}

	return 0;
}



