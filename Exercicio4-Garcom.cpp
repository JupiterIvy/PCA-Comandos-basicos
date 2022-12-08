#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

float total(float parcial,float valorGarcom){
	float aux;
	aux = parcial * valorGarcom;
	parcial = aux + parcial;
	printf ("%.2f", parcial);
	
}

int main(void){
	setlocale(LC_ALL, "");
	char pedido[100][100], resposta;
	float precoPedido;
	float parcial;
	float valorGarcom;
	
	printf("Inserir novo pedido? Sim(S), Não(N): ");
    scanf ("%c",&resposta);
    
	for (int i = 0; resposta == 'S' || resposta == 's'; i++){
		printf("Digite o pedido: \n");
		scanf("%s",&pedido[i]);
		
		printf("Digite o valor do pedido: \n");
		scanf("%f",&precoPedido);
		parcial = parcial + precoPedido;
			
		printf("\n Inserir novo pedido? Sim(S), Não(N): ");
	      scanf (" %c", &resposta);
	}
	
	for (int i = 0; i < 3; i++){
		printf("%s\n", pedido[i]);
	}
	
	printf("Digite a porcentagem do garçom: \n");
	scanf("%f",&valorGarcom);
	
	printf("Total: ");
	total(parcial,valorGarcom);

	return 0;
}
