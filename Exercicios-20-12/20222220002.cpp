#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int array[50];
	int count = 0;
	int i = 0;
	
	for (i = 0; i < 50; i++){
		printf("Digite um número: \n");
		scanf("%d", &array[i]);
		if (array[i] % 2 != 0){
			count += array[i];
		}
	}
	printf("Soma de todos os números ímpares: %d \n", count);
	return 0;
}
