#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>


int main(){
	setlocale(LC_ALL, "");
	int a[6][6], count = 0, l = 0, c = 0, dig[6][6], dig2[6][6];
	int i = 1, j = 1;
	int rd;
	srand(time(NULL));
	
	
	printf("Matriz 5x5: \n");
	for (i = 1; i <= 5; i++){
		for (j = 1; j <= 5; j++){
			rd = rand() % 100;
			a[i][j] = rd;
			if (i==j){
				dig[i][j] = a[i][j];
			}else{
				dig[i][j] = 0;
			}
			if(i+j == 6){
				dig2[i][j] = a[i][j];
			}else{
				dig2[i][j] = 0;
			}
			if (i == 4){
				l += a[i][j];
			}
			if (j == 2){
				c += a[i][j];
			}
			printf("%3d ", a[i][j]);
		}
		printf("\n");
	}
	
	printf("Diagonal principal: \n");
	for (i = 1; i <= 5; i++){
		for (j = 1; j <= 5; j++){
			printf("%3d ", dig[i][j]);
		}
		printf("\n");
	}
	printf("Diagonal secundária: \n");
	for (i = 1; i <= 5; i++){
		for (j = 1; j <= 5; j++){
			printf("%3d ", dig2[i][j]);
		}
		printf("\n");
	}
	printf("Soma linha 4: \n %d \n", l);
	printf("Soma coluna 2: \n %d \n", c);
	
	return 0;
}



