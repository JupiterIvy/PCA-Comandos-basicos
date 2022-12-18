#include <stdio.h>

int main(){
	
	float metro, cent;
	
	printf("Digite o No em metros: \n");
	scanf("%f", &metro);
	
	cent = metro * 100;
	
	printf("No em centímetros: %.2f", cent);
	return 0;
}
