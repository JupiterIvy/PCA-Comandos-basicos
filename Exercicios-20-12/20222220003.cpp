#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int vector[50];
	int count = 0;
	int i = 0;
	
	for (i = 0; i < 4; i++){
		printf("Digite um número: \n");
		scanf("%d", &vector[i]);
		if (vector[i] % 2 != 0){
			if ( 100 < vector[i]< 200){
				count += vector[i];
			}
		}
	}
	printf("Soma de todos os números ímpares: %d \n", count);
	return 0;
}
