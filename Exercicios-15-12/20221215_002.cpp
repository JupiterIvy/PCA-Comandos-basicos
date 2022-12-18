#include <stdio.h>

int main(){
	
	float nota1, nota2, nota3, nota4;
	printf("Digite a primeira Nota: \n");
	scanf("%f", &nota1);
	
	printf("Digite a segunda Nota \n");
	scanf("%f", &nota2);
	
	printf("Digite a terceira Nota \n");
	scanf("%f", &nota3);
	
	printf("Digite a quarta Nota \n");
	scanf("%f", &nota4);
	
	printf("Média das notas: %.2f", (nota1 + nota2 + nota3 + nota4)/2);
	return 0;
}
