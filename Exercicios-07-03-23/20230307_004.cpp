#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define NULL 0

int main(){
	setlocale(LC_ALL, "");

	int array1[8] = {1,2,3,4,5,6,7,8};
	int *pvet;
	for (pvet = &array1[0]; pvet <= &array1[7]; pvet++){
		printf("%d ", *pvet*2);
	}
	printf("\n PARES \n");
	for (pvet = &array1[0]; pvet <= &array1[7]; pvet++){
		if (*pvet % 2 ==0){
			printf("%d ", *pvet);
		}
		
	}
	
	return 0;
}


