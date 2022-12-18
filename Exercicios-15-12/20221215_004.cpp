#include <stdio.h>

int main(){
	
	float raio, area;
	
	printf("Digite o raio do círculo: \n");
	scanf("%f", &raio);
	
	area = 3.14*raio*raio;
	
	printf("No em centímetros: %.2f", area);
	return 0;
}
