#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define NULL 0
int soma(int arr1[], int arr2[]){
	int i = 0;
	int *pvet;
	size_t tam = sizeof(arr1)/2;
	if (sizeof(arr1) != sizeof(arr2)){
		return 0;
	}else{
		for (pvet = &arr2[0]-tam; pvet <= &arr2[0]; pvet++){
			printf("%d pvet\n", pvet);
			*pvet = arr1[i] + arr2[i];
			i++;
		}
		return 1;
	}
}

int main(){
	setlocale(LC_ALL, "");
	int array1[4] = {0, 1, 2, 3};
	int array2[4] = {4, 5, 6, 7};
	int array3[4], i;
	printf("%d endereço\n", &array2[0]);
	printf("%d endereço\n", &array3[0]);	
	printf("Resultado: %d\n", soma(array1, array2));
	for (i = 0; i < 4; i++){
		printf("%d ", array3[i]);
	}
	
	return 0;
}


