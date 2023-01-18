#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


float scan(float n){
	printf("Digite um número real entre 0 e 1: ");
	scanf("%f", &n);
	while (n < 0 || n > 1){
		printf("Valor inválido \n");
		printf("Digite um número real entre 0 e 1: ");
		scanf("%f", &n);
	}
	return n;
}

float arctan(float n){
	int i = 3, j;
	float x = 1, count, e, aux = 1;
	count = n;
	e = 0.0001;
	while (x > e){
		if (i % 2 != 0){
			for (j = 1; j <= i; j++){
				aux *= n;
			}
			count -= aux/i;
			x = (aux / i);
		}
		if (i % 2 == 0){
			count *= -1;
		}
		i++;
	}
	count = fabs(count);
	return count;
}

void print(float a, float b){
	printf("Número real: %.4f \n", a);
	printf("Arco tangente: %.4f \n", b);
}
	

int main(){
	setlocale(LC_ALL, "");
	float x, y;
	
	x = scan(x);
	y = arctan(x);
	print(x, y);
	
	return 0;
}
