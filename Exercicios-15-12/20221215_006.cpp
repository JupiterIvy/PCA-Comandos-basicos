#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int horas;
	float ganhos, total;
	
	printf("Digite o n� de horas trabalhadas no m�s: \n");
	scanf("%d", &horas);
	
	printf("Digite os ganhos por hora: \n");
	scanf("%f", &ganhos);
	
	total = horas * ganhos;
	printf("Sal�rio do m�s: %.2f", total );
	
	return 0;
}
