#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int horas;
	float ganhos, total, sind, inss, ir;
	
	printf("Digite o n° de horas trabalhadas no mês: \n");
	scanf("%d", &horas);
	
	printf("Digite os ganhos por hora: \n");
	scanf("%f", &ganhos);
	
	total = horas * ganhos;
	ir = (total*0.11);
	inss = (total*0.08);
	sind = (total*0.05);
	
	printf("Salário bruto: %.2f \n", total);
	printf("Pagamento do INSS: %.2f \n", inss);
	printf("Pagamento do sindicato: %.2f \n", sind);
	printf("Salário líquido: %.2f \n", total - ir - inss - sind);
	
	return 0;
}
