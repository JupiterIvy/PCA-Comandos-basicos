#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int final(int a, int b){
	int cont = 0;
	
    while (a > 0){
    	while (b > 0){
    		if (a==b)
            cont++;
            printf("B = %d \n", b);
		  	b = b/10; 
		} 
		printf("A = %d \n", a);
		a=a/10;
    }
    if (cont >= 1){
    	printf("Corresponde");	
	}else{
		printf(" N�o corresponde");	
	}
}


int main(){
	setlocale(LC_ALL, "");
	int n, d;
	printf("Digite um n�mero X: ");
	scanf("%d", &n);
	printf("Digite um n�mero Y: ");
	scanf("%d", &d);
	final(n,d);
	return 0;
}
