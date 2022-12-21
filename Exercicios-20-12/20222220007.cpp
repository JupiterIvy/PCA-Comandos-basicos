#include <stdio.h>
#include <locale.h>


float minMax(float exs[], int nb, float *mn, float *mx){
	float min = 1, max = 1;
	int i;
	
	for (i = 1; i < nb + 1; i++){
		if (i <= 1){
			min = exs[i];
		}
		if (exs[i]>max){	
			max = exs[i];
		}
		if (exs[i] < min){
			min = exs[i];
		}
	}
	*mn = min;
	*mx = max;
}


float media(float notas[]){
	float med = 0;
	int i = 1;
	
	for(i = 1; i < 4; i++){
		med += notas[i];
	}
	return med/3;
}


int main(){
	setlocale(LC_ALL, "");
	float array[3];
	float mn, mx;
	int i, j, n, nb;
	printf("Digite o número de alunos: \n");
	scanf("%d",&n);
	float med[n];
	for (i = 1; i < n+1; i++){
		printf("====Nota do %d° aluno ====\n", i);
		for (j = 1; j < 4; j++){
			printf("Digite a nota do %d° exercicio: \n",j);
			scanf("%f", &array[j]);
		}
		nb = (sizeof(array))/sizeof(array[1]);
		minMax(array,nb, &mn, &mx);
		printf("Maior nota de exercício: %.2f \n",mx);
		printf("Menor nota de exercício: %.2f \n",mn);
		med[i] = media(array);
		printf("\n");
	}
	nb = (sizeof(med))/sizeof(med[1]);
	minMax(med, nb, &mn, &mx);
	printf("Maior nota de média final: %.2f \n",mx);
	printf("Menor nota de média final: %.2f \n",mn);
	
	
	return 0;
}




