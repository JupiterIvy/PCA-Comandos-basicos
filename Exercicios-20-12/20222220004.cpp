#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int array[20];
	int min, max = 1;
	int i = 1;
	
	for (i = 1; i < 6; i++){
		printf("Digite um número: \n");
		scanf("%d", &array[i]);
		if (i <= 1){
			min = array[i];
		}
		if (array[i]>max){	
			max = array[i];
		}
		if (array[i] < min){
			min = array[i];
		}
	}
	printf("menor número: %d \n", min);
	printf("maior número: %d \n", max);
	
	return 0;
}
