#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

#define max 20

int main(){
	setlocale(LC_ALL, "");
	int i, j, tam, op, count=-1;
	char aluno[5][4][max];
	char aux[max];
	
	for (i = 0; i < 5; i++){
		printf("==%d° equipe==\n", i+1);
		for (j = 0; j < 4; j++){
			printf("digite o nome e sobrenome do aluno: ");
			gets(aluno[i][j]);
		}
	}
	printf("\nDigite o nome e sobrenome do aluno para busca: ");
	gets(aux);
	for (i = 0; i < 5; i++){
		for (j = 0; j < 4; j++){
			count = strcmp (aluno[i][j],aux);
			if (count == 0){ 
				op = i;
				break;
			}
		}
	}
	if (count == 0){
		printf("\nAluno pertence à equipe %d \n", op+1);
	}else{
		printf("\nAluno não encontrado\n");
	}
	
	return 0;
}
