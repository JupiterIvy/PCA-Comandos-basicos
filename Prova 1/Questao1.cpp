#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	setlocale(LC_ALL, "");
	int i, n;
	float m, med = 0, min = 10, max = 0;
	int op;
	printf("Deseja inserir notas de aluno? Sim(1) Não(0)\n");
	scanf("%d", &op);
	
	while (op == 1){
		printf("Digite a quantidade de atividades: ");
		scanf("%d",&n);
		for (i = 1; i<=n; i++){
			printf("Digite a %d nota: ",i);
			scanf("%f", &m);
			while (m < 0){
				printf("Valor inválido \n");
				printf("Digite a %d nota: ", i);
				scanf("%f", &m);
			}
			med += m;
			if (i == n){
				med = med/n;
			}
			if (min > m){
				min = m;
			}
			if (max < m){
				max = m;
			}
		}
		printf("menor nota: %.2f \n", min);
		printf("maior nota: %.2f \n", max);
		printf("média: %.2f \n", med);
		min = 0;
		max = 0;
		med = 0;
		printf("Deseja inserir novo aluno? ");
		scanf("%d", &op);
	}
	
	return 0;
}
