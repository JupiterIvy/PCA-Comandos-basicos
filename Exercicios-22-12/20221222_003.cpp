#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL, "");
	int nb, npar = 0, nimpar = 0;
	int i = 1;

	while (true){
		printf("Insira o n�mero: ");
    	scanf ("%d",&nb);
    	if (nb > 0){
    		if (nb >= 1000){
    		break;
			}
			if(nb % 2 == 0){
				npar += nb;
			}
			if(nb % 2 != 0){
				nimpar += nb;
			}
		}else{
			printf("valor deve ser positivo");
		}
	}
	printf("Soma de n�mero pares: %d \n", npar);
	printf("Soma de n�mero impares: %d \n", nimpar);

	return 0;
}




