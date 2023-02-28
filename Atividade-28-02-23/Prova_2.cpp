#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

#define max 100

float acrescenta(float notas[]){
	int i; 
	for (i = 0; i < 6; i++){
		if (notas[i] < 10){
			notas[i] += 1;
			printf("%.1f   ", notas[i]);
		}
	}
	return notas[6];
}


char* adiciona(char equipes[][max]){
	int i;
	char novo[max]; 
	printf("Digite o nome do aluno que deseja adicionar: ");
	gets(novo);
	strcpy(equipes[7], novo);
	return equipes[7];
}


int main(){
	setlocale(LC_ALL, "");
	char equipes[2][6][max] = {
	{"Bruno", "Pedro", "Leticia", "Rebeca", "Jorge", "Marta"}, 
	{"Guilherme", "Beatriz", "Carla", "Victor", "Luis", "Joao"}
	};
	char sexo[2][6] = {{'H','H','M','M','H','M'}, {'H','M','M','H','H','H'}};
	float notas[2][6] = {{8.5, 10, 9.5, 10, 2, 5},{7.5, 8 ,9, 10, 3, 6.3}};
	int i, j, m1 = 0, m2 = 0, k = 0;
	char projeto[k][max];
	for (i = 0; i < 2; i++){
		for(j = 0; j < 6; j++){
			if (sexo[i][j] == 'M' and i == 0){
				m1++;
			}
			if (sexo[i][j] == 'M' and i == 1){
				m2++;
			}
		}
	}
	if (m1 > m2){
		printf("Equipe 1 tem maior quantidade de mulheres\n");
	}else{
		printf("Equipe 2 tem maior quantidade de mulheres\n");
	}
	printf("Mulheres aptas a participar do projeto\n\n");
	
	for (i = 0; i < 2; i++){
		for(j = 0; j < 6; j++){
			if (sexo[i][j] == 'M' and notas[i][j] >= 8){
				k++;
				strcpy(projeto[k], equipes[i][j]);
				printf("%s \n", projeto[k]);
			}
		}
	}
	acrescenta(notas[0]);
	printf("\n");
	acrescenta(notas[1]);
	printf("\n");
	adiciona(equipes[0]);
	
	return 0;
}


