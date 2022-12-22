#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float array[15];
	float min = 1, max = 1;
	int i = 1;
	
	for (i = 1; i < 16; i++){
		printf("Digite um número: \n");
		scanf("%f", &array[i]);
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
	printf("menor número: %.2f \n", min);
	printf("maior número: %.2f \n", max);
	
	return 0;
}
