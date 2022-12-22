#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL, "");
	int d,n;
	int i,j=1;
	float count, x[51];
    
    for (i = 1; i < 101; i++){
    	if (i == 1){
    		x[i] = i;
		}
    	if (i % 2!= 0){
    		x[j] = i;
    		j++;
		}
	}
	for (i = 1; i < 51; i++){
		count += (x[i])/i;
		printf("%.f / %d \n", x[i],i);
	}
	printf("soma: %.2f",count);


	return 0;
}




