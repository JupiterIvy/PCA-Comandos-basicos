#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL, "");
	int nb, c;
	int i;
	
	printf("Insira o número: ");
    scanf ("%d",&nb);
    
    for (i = 2; i <= nb/2; i++){
    	if(nb%i == 0){
			c++;
			break;
		}
	}
	if (c == 0){
		printf("É número primo");
	}

	return 0;
}




