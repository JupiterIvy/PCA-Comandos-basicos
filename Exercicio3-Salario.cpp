#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
float novoSalario(float salario,float ajuste){
	float aumento;
	aumento = salario * ajuste;
	salario = salario + aumento;
	printf ("%.2f",salario);
	
}

int main(void){
	setlocale(LC_ALL, "");
	float salario;
	float ajuste = 0.10;
	
	printf("Digite seu salario: \n");
	scanf("%f",&salario);

	printf("Salário com reajuste: ");
	novoSalario(salario,ajuste);
	
	return 0;
}
