#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

void verificar(char sexo[]){
	if (strcmp(sexo,"m")==0||strcmp(sexo,"M")==0){
		printf("Mulher \n");
	}
	else if(strcmp(sexo,"h")==0||strcmp(sexo,"H")==0){
		printf("Homem \n");
	}
}

int main(void){
	setlocale(LC_ALL, "");
	char nome[100],sexo[2];
	int idade;
	
	printf("Digite seu nome: \n");
	scanf("%s",&nome);

	printf("Digite seu sexo: \n");
	scanf("%s",&sexo);
	
	printf("Digite sua idade: \n");
	scanf("%d",&idade);
	
	printf("nome: %s \n", nome);
	printf("sexo: "); verificar(sexo);
	printf("idade: %d", idade);
	
	
	return 0;
}
