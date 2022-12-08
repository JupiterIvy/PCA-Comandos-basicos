#include <stdio.h>
#include <locale.h>
#include <typeinfo>

int main(void){
	setlocale(LC_ALL, "");
	float b,a;
	
	printf("Digite a altura do triângulo: \n");
	scanf("%f",&a);

	printf("Digite a base do triângulo: \n");
	scanf("%f",&b);
	
	printf("Área do triângulo: %.2f", (a+b)/2);
	
	return 0;
}
