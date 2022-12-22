#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL, "");
	float mi, mf;
	int total = 0, mn, sec, hr, i;
	
	printf("Massa inicial (g): \n");
	scanf("%f", &mi);
	
	mf = mi;
	while (mf >= 0.5) {
	    mf = mf / 2;
	    total = total + 50;
  	}

	printf("\n");
	printf("Massa Inicial: %7.0f gramas \n", mi);
	printf("Massa Final: %9.2f gramas \n", mf);
	
	printf("\n");
	printf("Tempo total: %d segundos.\n", total);
	hr = (total / 3600);
	mn = (total % 3600) / 60;
	sec = (total % 3600) % 60;
	
	printf("== Horas, minutos e segundos == \n");
	printf("%d horas \n", hr);
	printf("%d minutos \n", mn);
	printf("%d segundos \n", sec);
  
	
	return 0;
}
