#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float ns[5];
	int i = 0;
	
	for (i = 0; i < 5; i++){
		printf("Digite um n�mero: \n");
		scanf("%f", &ns[i]);
		ns[i] += ns[i-1];
	}
	printf("Soma de todos os cinco n�meros: %.2f \n",ns[4]);
	
	return 0;
}
