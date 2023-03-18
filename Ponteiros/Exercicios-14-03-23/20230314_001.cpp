/*20230314_001
Fa�a um programa que calcula a m�dia e o desvio padr�o das notas de uma turma;
- O programa deve solicitar no in�cio a quantidade de alunos na turma e alocar dinamicamente 
  um vetor de float onde as notas dos alunos digitadas devem ser armazenadas;
- Voc� deve criar uma fun��o �mediaDesvio� para calcular a m�dia e o desvio padr�o e 
  retornar estes valores atrav�s de par�metros passados por refer�ncia (ponteiros). 
  A fun��o recebe como par�metro o ponteiro para o vetor, a quantidade de elementos no vetor, 
  e dois ponteiros: media e desvio onde deve guardar os resultados;
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

#define NULL 0

float mediaDesvio(float* num, float* med, float* des, int qtd){
	float soma = 0;
	int i;
	for(i = 0; i < qtd; i++){
		soma += num[i];
	}
	*med = soma/qtd;
	soma = 0;
	for(i = 0; i < qtd; i++){
		soma += pow((num[i] - *med), 2);
	}
	*des = pow((soma/qtd), 0.5);
}


int main(){
	setlocale(LC_ALL, "");
	int qtd, i = 0;
	float* notas, rd;
	float med, desvio;
	
	srand(time(NULL));
	
	printf("Digite a quantidade de alunos: ");
	scanf("%d", &qtd);
	
	notas = (float*)malloc(qtd*sizeof(float));

	if(notas != NULL) {
		for (i = 0; i < qtd; i++){
			rd = ((float)rand()/RAND_MAX)*(float)(10.0);
			notas[i] = rd;
			printf("%.2f ", notas[i]);
		}
		mediaDesvio(notas, &med, &desvio, qtd);
		free(notas);
	}
	printf("\nmedia %.2f", med);
	printf("\ndesvio %.2f", desvio);
	
	return 0;
}


