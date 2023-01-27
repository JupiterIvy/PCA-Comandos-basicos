#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#define max 50


int main(){
	setlocale(LC_ALL, "");
	int a[max][max], n, l[max], c[max], dig;
	int i = 1, j = 1, dig2 = 0, count;
	int rd;
	srand(time(NULL));
	
	printf("Digite a quantidade de linhas e colunas: \n");
	scanf("%d", &n);
	
	
	printf("Matriz: \n");
	
	for (i = 1; i <= n; i++){
		for (j = 1; j <= n; j++){
			rd = rand() % 100;
			a[i][j] = rd;
			if (i==j){
				dig += a[i][j];
			}
			if(i+j == n+1){
				dig2 += a[i][j];
			}
			c[j] += a[i][j];
			l[i] += a[i][j];
			printf("%3d ", a[i][j]);
		}
		printf("\n");
	}
	printf("Soma das linhas: \n");
	for (i = 1; i <= n; i++){
		printf("%3d \n", l[i]);
	}
	printf("Soma das colunas: \n");
	for (i = 1; i <= n; i++){
		printf("%3d \n", c[i]);
	}
	printf("Soma da diagonal principal: \n");
	printf("%d \n", dig);
	
	printf("Soma da diagonal secundária: \n");
	printf("%d \n", dig2);
	
	for (i = 1; i <= n; i++){
		if(l[i] == l[i+1]){
			if(c[i]==c[i+1]){
				if (dig == dig2){
					count++;
				}
			}
		}
	}
	if (count > 0){
		printf("É um quadrado mágico");
	}else{
		printf("Não é um quadrado mágico");
	}


	return 0;
}



