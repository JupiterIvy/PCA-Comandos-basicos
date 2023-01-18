#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int contar(int n, int d){
	int cont=0;
    while (n > 0){
        if ((n%10)==d)
            cont++;
        n=n/10;
    }
    return cont;
	}


int main(){
	setlocale(LC_ALL, "");
	int n, d;
	printf("Digite um número n: ");
	scanf("%d", &n);
	printf("Digite um número d: ");
	scanf("%d", &d);
	printf("%d", contar(n,d));
	return 0;
}
