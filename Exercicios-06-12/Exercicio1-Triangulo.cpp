#include <stdio.h>
#include <locale.h>
#include <typeinfo>

int main(void){
	setlocale(LC_ALL, "");
	float b,a;
	
	printf("Digite a altura do tri�ngulo: \n");
	scanf("%f",&a);

	printf("Digite a base do tri�ngulo: \n");
	scanf("%f",&b);
	
	printf("�rea do tri�ngulo: %.2f", (a+b)/2);
	
	return 0;
}
