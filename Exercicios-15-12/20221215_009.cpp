#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int ft, sc;
	float th;
	
	printf("Digite o primeiro n° inteiro: \n");
	scanf("%d", &ft);
	
	printf("Digite o segundo n° inteiro: \n");
	scanf("%d", &sc);
	
	printf("Digite o número real: \n");
	scanf("%f", &th);
	
	printf("produto do dobro do 1° com metade do 2°: %d \n", (2*ft)*(sc/2));
	printf("a soma do triplo do 1° com o 3°: %.2f \n", (3*ft)+th);
	printf("o 3° elevado ao cubo: %.2f \n", th*th*th);
	
	return 0;
}
