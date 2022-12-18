#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float h;
	
	printf("Digite a altura: \n");
	scanf("%f", &h);
	
	printf("Peso ideal: %.2f \n",(0.727*h) - 58);
	
	return 0;
}
