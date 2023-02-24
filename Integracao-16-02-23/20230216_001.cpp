#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <time.h>

#define max 120

int ordenar(int av[], char nome[][max],char pos[][max]){
	int i, j, tmp;
	char tmp2[max], tmp3[max];
 
	for(i = 0; i < 23; i++){
		for(j = i+1; j < 23; j++){
	    	if(av[j] < av[i]){
	    		strcpy(tmp2,nome[i]);
	    		strcpy(nome[i],nome[j]);
	    		strcpy(nome[j],tmp2);
	    		strcpy(tmp3,pos[i]);
	    		strcpy(pos[i],pos[j]);
	    		strcpy(pos[j],tmp3);
	    		tmp = av[i];
	    		av[i] = av[j];
	    		av[j] = tmp;
	    	}
  		}
 	}
 	return av[23], nome[23][max], pos[23][max];
}

int main(){
	setlocale(LC_ALL, "");
	int rd = 0;
	char nomes[23][max] = {
	"HUGO SOUZA", "MATHEUS CUNHA", "SANTOS", "RODRIGO CAIO", 
	"LEO PEREIRA", "DAVID LUIZ", "CLEITON", "FABRICIO BRUNO",
	"PABLO", "FILIPE LUIS", "ARTURO VIDAL", "THIAGO MAIA", 
	"ERICK", "GERSON", "EVERTON RIBEIRO","DE ARRASCAETA", 
	"VICTOR HUGO", "MATHEUS FRANÇA", "GABI","BRUNO HENRIQUE",
	"PEDRO", "MARINHO", "EVERTON"
	};
	char posicao[23][max] = {
	"GOLEIRO", "GOLEIRO", "GOLEIRO",
	"DEFESA", "DEFESA", "DEFESA", "DEFESA",
	"DEFESA", "DEFESA", "DEFESA", "MEIO","MEIO",
	"MEIO", "MEIO", "MEIO", "MEIO", "MEIO", "MEIO",
	"ATACANTE","ATACANTE","ATACANTE","ATACANTE",
	"ATACANTE"
	};
	char goleiro[2][max], defesa[4][max], meio[4][max], atacante[2][max];
	int avaliacao[23], i, j = 0;
	int k = 0, l = 0, m = 0;
	for (i = 0; i < 23; i++){
		rd = rand() % 11;
		avaliacao[i] = rd;
	}
	printf("\nTodos os jogadores\n\n");
	for (i = 0; i < 23; i++){
		printf("%d 	%s 		%s", avaliacao[i], nomes[i], posicao[i]);
		printf("\n");
	}
	printf("\nTodos os jogadores\n\n");
	ordenar(avaliacao, nomes, posicao);
	for (i = 0; i < 23; i++){
		printf("%d 	%s 		%s", avaliacao[i], nomes[i], posicao[i]);
		printf("\n");
	}
	printf("\nEscalação\n\n");
	
	for (i = 23; i > 0; --i){
		if (strcmp(posicao[i], "GOLEIRO")==0){
			strcpy(goleiro[j], nomes[i]);
			break;
		}
	}
	for (i = 23; i > 0; --i){
		if (strcmp(posicao[i], "DEFESA")==0){
				strcpy(defesa[k], nomes[i]);
				k++;
				if (k > 4){
					break;
				}
		}
	}
	for (i = 23; i > 0; --i){
		if (strcmp(posicao[i], "MEIO")==0){
				strcpy(meio[l], nomes[i]);
				l++;
				if (l > 4){
					break;
				}
		}
	}
	for (i = 23; i > 0; --i){
		if (strcmp(posicao[i], "ATACANTE")==0){
				strcpy(atacante[m], nomes[i]);
				m++;
				if (m > 4){
					break;
				}
		}
	}
	
	printf("\n GOLEIRO: %s", goleiro);
	for (i = 0; i < 4; i++){
		printf("\n DEFESA: %s", defesa[i]);
		printf("\n MEIO: %s", meio[i]);
	}
		for (i = 0; i < 2; i++){
		printf("\n ATACANTE:  %s", atacante[i]);
	}
	
	return 0;
}
