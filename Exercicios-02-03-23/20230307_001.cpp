#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

float imprime(float* first, float* last){
	float *pvet;
	for (pvet = first; pvet <= last; pvet++){
		printf("%.1f ", *pvet);
	}
	printf("\n");
}


int main(){
	setlocale(LC_ALL, "");
	float array1[5] = {2, 4.3, 4, 5, 9};
	float array2[3] = {1, 7, 8};
	float array3[6] = {0, 6, 3.5, 2.5, 7.9, 10};
	imprime(&array1[0], &array1[2]);
	imprime(&array2[1], &array2[2]);
	imprime(&array1[3], &array1[4]);
	
	
	return 0;
}


