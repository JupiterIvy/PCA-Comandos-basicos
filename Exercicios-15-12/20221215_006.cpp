#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int horas;
	float ganhos, total;
	
	printf("Digite o n° de horas trabalhadas no mês: \n");
	scanf("%d", &horas);
	
	printf("Digite os ganhos por hora: \n");
	scanf("%f", &ganhos);
	
	total = horas * ganhos;
	printf("Salário do mês: %.2f", total );
	
	return 0;
}
