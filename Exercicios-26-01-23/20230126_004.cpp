#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>


int main(){
	setlocale(LC_ALL, "");
	int a[5][5], count = 0, l, c;
	int i = 1, j = 1, x;
	int rd;
	srand(time(NULL));
	
	printf("Digite o valor a ser buscado: \n");
	scanf("%d", &x);
	
	
	printf("Matriz 3x3: \n");
	for (i = 1; i <= 3; i++){
		for (j = 1; j <= 3; j++){
			rd = rand() % 100;
			a[i][j] = rd;
			if (x == a[i][j]){
				count++;
				l = i;
				c = j;
			}
			printf("%3d ", a[i][j]);
		}
		printf("\n");
	}
	if (count > 0){
		printf("valor encontrado em: a[%d][%d]", l,c);
	}else{
		printf("valor não encontrado");
	}
	
	return 0;
}



