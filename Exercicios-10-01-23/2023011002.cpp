#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int permut(int a, int b){
	int cont = 0;
    while (a > 0){
    	while (b > 0){
    		if ((a%10)==b)
            cont++;
		  b = b/10; 
		} 
		a=a/10;
    }
    if (cont >= 1){
    	printf("A � permuta��o de B");	
	}else{
		printf("A n�o � permuta��o de B");	
	}
}


int main(){
	setlocale(LC_ALL, "");
	int n, d;
	printf("Digite um n�mero A: ");
	scanf("%d", &n);
	printf("Digite um n�mero B: ");
	scanf("%d", &d);
	permut(n,d);
	return 0;
}
