#include <stdio.h>

int main(){
	
	float raio, area;
	
	printf("Digite o raio do c�rculo: \n");
	scanf("%f", &raio);
	
	area = 3.14*raio*raio;
	
	printf("No em cent�metros: %.2f", area);
	return 0;
}
