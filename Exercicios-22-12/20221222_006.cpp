#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL, "");
	int nb, i, count=0;
	
	printf("Digite um número: ");
	scanf("%d",&nb);
	for(i = 1 ; i < nb; i++){
		if (nb%i == 0){
			count+=i;
			printf("%d\n", i);
			if(count == nb){
				printf("%d é um número perfeito", nb);
				break;
			}	
		}
	}
	
	return 0;
}




