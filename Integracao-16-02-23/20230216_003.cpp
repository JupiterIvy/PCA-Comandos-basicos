#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define max 50

int intersec(int vet1[], int vet2[], int sec[], int tam1, int tam2){
	int i, j, k = 1;
	int count = 0;

	for (i = 0; i <= tam1; i++){
		printf("VETOR 1: %d \n", vet1[i]);
	}
	for (i = 0; i <= tam2; i++){
		printf("VETOR 2: %d \n", vet2[i]);
	}
	if (tam1 >= tam2){
		for (i = 1; i <= tam1; i++){
			for (j = 1; j <= tam2; j++){
				if (vet1[i] == vet2[j]){
					sec[k] = vet1[i];
					k++;
					count++;
				}
			}
		}
	}else{
		for (i = 1; i <= tam2; i++){
			for (j = 1; j < tam1; j++){
				if (vet2[i] == vet1[j]){
					sec[k] = vet2[i];
					k++;
					count++;
				}
			}
		}
	}
	sec[0] = count;
	return sec[count + 1];
}

int main(){
	setlocale(LC_ALL, "");
	int n, rd, tam, rd2;
	int i, j, k = 0, l = 0;
	int sec[max][max], sec2[max][max];
	int conjunto[n][max];
	int inter[1][k];
	
	srand(time(NULL));
	
	printf("Digite o n: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		printf("digite o tamanho do conjunto: ");
		scanf("%d", &rd);
		conjunto[i][0] = rd;
		printf("TAMANHO: %d \n", conjunto[i][0]);
		for (j = 1; j <= conjunto[i][0]; j++){
			printf("digite o elemento: ");
			scanf("%d", &rd2);
			conjunto[i][j] = rd2;
			if (i == 0){
				sec[i][0] = rd;
				sec[i][j] = rd2;
			}
		}
	}
	for (i = 0; i < n; i++){
		for (j = 1; j <= conjunto[i][0]; j++){
			printf("ELEMENTO %d ", conjunto[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < n - 1; i++){
		intersec(sec[i], conjunto[i+1], sec2[i], sec[i][0], conjunto[i+1][0]);
		printf("TAMANHO DE SEC2: %d \n", sec2[i][0]);
		sec[i+1][0] = sec2[i][0];
		for (j = 1; j <= sec2[i][0]; j++){
			sec[i+1][j] = sec2[i][j];
			printf("ELEMENTO SEC2: %d \n", sec2[i][j]);
			if (i == n - 2){
				inter[k][0] = sec2[i][0];
				inter[k][j] = sec2[i][j];
				k++;
			}
		}
		printf("\n");
	}
	printf("\nINTER\n\n");
	for (i = 0; i < 1; i++){
		for (j = 1; j <= k; j++){
			printf("%d ", inter[i][j]);
		}
		printf("\n");
	}

	return 0;
}
