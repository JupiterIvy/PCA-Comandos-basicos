#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int array[20];
	int min = 1, max = 1;
	int i = 1;
	
	for (i = 1; i < 21; i++){
		printf("Digite um número: \n");
		scanf("%d", &array[i]);
		if (array[i]>=0){
			if (array[i]>max){	
				max = array[i];
			}
			if (array[i] < min){
				min = array[i];
			}
		}else{
			printf("Valor deve ser positivo \n");
			break;
		}
		
	}
	printf("menor número: %d \n", min);
	printf("maior número: %d \n", max);
	
	return 0;
}
