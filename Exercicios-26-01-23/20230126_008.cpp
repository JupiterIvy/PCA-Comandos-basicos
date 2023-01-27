#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#define max 100

int matrixMul(int a[max][max], int b[max][max], int mul[max][max], int m1, int m2, int n1, int n2){
	int i = 1, j = 1, k = 1;
	int aux = 0;
		
	for (i = 1; i <= m1; i++){
		for (j = 1; j <= n2; j++){
			for (k = 1; k <= m2; k++){
				aux += a[i][k] * b[k][j];
			}
			mul[i][j] = aux;
			aux = 0;
		}
	}
	return mul[m1][n2];
}


int main(){
	setlocale(LC_ALL, "");
	int a[max][max], b[max][max], mul[max][max], m1, m2, n1, n2;
	int i = 1, j = 1;
	int rd;
	srand(time(NULL));
	
	printf("Digite a quantidade de linhas da 1° matriz: \n");
	scanf("%d", &m1);
	printf("Digite a quantidade de colunas da 1° matriz: \n");
	scanf("%d", &n1);
	
	printf("Digite a quantidade de linhas da 1° matriz: \n");
	scanf("%d", &m2);
	printf("Digite a quantidade de colunas da 1° matriz: \n");
	scanf("%d", &n2);
	
	if(n1 != m2){
		printf("Valores de linhas e colunas não correspondem");
	}else{
		printf("Primeira Matriz: \n");
		
		for (i = 1; i <= m1; i++){
			for (j = 1; j <= n1; j++){
				rd = rand() % 100;
				a[i][j] = rd;
				printf("%3d ", a[i][j]);
			}
			printf("\n");
		}
		
		printf("Segunda Matriz: \n");
		
		for (i = 1; i <= m2; i++){
			for (j = 1; j <= n2; j++){
				rd = rand() % 100;
				b[i][j] = rd;
				printf("%3d ", b[i][j]);
			}
			printf("\n");
		}
		
		if (matrixMul(a, b, mul, m1, m2, n1, n2)){
			printf("Terceira Matriz: \n");
			for (i = 1; i <= n1; i++){
				for (j = 1; j <= m2; j++){
					printf("%3d ", mul[i][j]);
				}
			printf("\n");
			}	
		}
	}
	

	return 0;
}



