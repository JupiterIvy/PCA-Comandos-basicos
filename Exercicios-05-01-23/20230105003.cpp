#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int verificarPerfeito(int n){
	int i, count = 0;
	for(i = 1 ; i < n; i++){
		count += i;
		if(count == n){
			printf("\n %d � um n�mero perfeito", n);
			break;
		}
		if (i == n-1 && count != n){
			printf("\n %d n�o � um n�mero perfeito", n);
			break;
		}	
	}
}


int scanPar(int n){
	int i = 0;
	while(1){
		printf("Digite um n�mero: ");
		scanf("%d",&n);
		if (n % 2 != 0){
			printf("� necess�rio n�mero par \n");
		}else if(n % 2 == 0){
			return n;
		}
	}
}


int main(){
	setlocale(LC_ALL, "");
	int n;
	
	n = scanPar(n);
	verificarPerfeito(n);
	
	return 0;
}
