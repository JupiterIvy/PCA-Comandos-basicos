#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define NULL 0

int ordena(int arr[], int* a, int* b){
	int i, j, tmp;
 	int tam = 6;
	for(i = 0; i < tam; i++){
		for(j = i+1; j < tam; j++){
	    	if(arr[j] < arr[i]){
	    		tmp = arr[i];
	    		arr[i] = arr[j];
	    		arr[j] = tmp;
	    	}
  		}
 	}
 	*a = arr[0];
 	*b = arr[tam-1];
 	return arr[tam];
	
}


int main(){
	setlocale(LC_ALL, "");
	int arr[6] = {2, 4, 5, 3, 1, 7};
	int min, max, i;
	
	ordena(arr, &min, &max);
	printf("min: %d \nmax: %d\n", min, max);
	
	for (i = 0; i < 6; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}


