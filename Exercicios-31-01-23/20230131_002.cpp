#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

int main(){
	setlocale(LC_ALL, "");
	int cons[6];
	float mil[6];
	int i, tam, min;
	char car[6][10], mCar[10];
	
	for (i = 0; i < 5; i++){
		printf("digite o nome de um modelo: ");
		scanf("%s", car[i]);
		printf("digite a quilometragem por litro: ");
		scanf("%d", &cons[i]);
		if (min < cons[i]){
			min = cons[i];
			strcpy(mCar,car[i]);
		}
		mil[i] = 1000/(cons[i]);
	}
	
	printf("\nCarro mais econômico: \n");
	printf("%s", mCar);
	
	printf("\nQuanto cada carro consome com 1000 km: \n");
	for (i = 0;i < 5; i++){
		printf("%s: ", car[i]);
		printf("%.2f \n", mil[i]);
	}
	
	return 0;
}
