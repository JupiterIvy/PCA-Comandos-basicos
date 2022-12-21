#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int i = 1, j = 1;
	int count;
	
	for (i = 1; i < 10; i++){
		for (j = 1; j < 11 ; j++){
			count = i*j;
			printf("%d x %d = %d \n", i,j,count);
		}
		printf("\n");
	}
		
	return 0;
}
