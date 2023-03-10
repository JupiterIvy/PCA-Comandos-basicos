#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define NULL 0

int find(int* first, int* last){
	int *pvet;
	int count = 0;
	for (pvet = first; pvet <= last; pvet++){
		if (*pvet == 12){
			count ++;
			return *pvet;
		}
		else{
			return NULL;
		}
	}

}

int main(){
	setlocale(LC_ALL, "");
	int array1[10] = {2, 4, 6, 5, 9, 2, 7, 2, 8, 10};
	int i;
	printf("%d", find(&array1[0], &array1[9]));

	return 0;
}


