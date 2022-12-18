#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float fh, cs;
	
	printf("Digite a temperatura em Farenheit: \n");
	scanf("%f", &fh);
	
	cs = (5*(fh-32)/9);
	printf("Temperatura em Celsius: %.2f", cs );
	
	return 0;
}
