#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

#define e 0.1


int main(){
	setlocale(LC_ALL, "");
	float y,x[50],n=1;
	int i = 1;

	printf("Insira o n�mero: ");
    scanf ("%f",&y);
    
    printf("Resultado obtido pelo m�todo Newton-Raphson: \n");
	while (n > e){
		if (i == 1){
    		x[i]= y/2;
    		printf("%.2f \n", x[i]);
		}
		if(i > 1){
			x[i] = (x[i-1]) - (((x[i-1]*x[i-1])-y)/(2*x[i-1]));
			printf("%.2f \n", x[i]);
		}
		n = fabs(x[i-1]-x[i]);
		i++;
	}
	printf("Resultado obtido pela biblioteca math(): \n%.2f", sqrt(y));

	return 0;
}




