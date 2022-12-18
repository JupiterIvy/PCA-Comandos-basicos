#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float fh, cs;
	
	printf("Digite a temperatura em Celsius: \n");
	scanf("%f", &cs);
	
	fh = ((cs*9)/5) + 32;
	printf("Temperatura em Farenheit: %.2f", fh);
	
	return 0;
}
