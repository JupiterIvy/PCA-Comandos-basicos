#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int scan(int n){
	printf("Digite um número: ");
	scanf("%d", &n);
	while (n < 0){
		printf("Valor inválido \n");
		printf("Digite um número: ");
		scanf("%d", &n);
	}
	return n;
}

int hiperfatorial(int n){
	int i, count = 0, aux = 0;
	for (i = 0; i <= n; i++){
		aux = count;
		count = i * i;
		aux *= count;
	}
	return aux;
}

void print(int n, int h){
	printf("Número inteiro: %d \n", n);
	printf("Hiperfatorial: %d \n", h);
}
	

int main(){
	setlocale(LC_ALL, "");
	int n1, n2;
	
	n1 = scan(n1);
	n2 = hiperfatorial(n1);
	print(n1,n2);
	
	return 0;
}
