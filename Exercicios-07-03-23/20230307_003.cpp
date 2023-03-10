#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define NULL 0

int main(){
	setlocale(LC_ALL, "");
	int x = 2, *a;
	char y = {'m'}, *b;
	float z = 5.4, *c;
	
	a = &x;
	b = &y;
	c = &z;
	
	printf("INTEIROS antes: %d \n", x);
	*a = 12;
	printf("INTEIROS depois: %d \n", x);
	printf("REAIS antes: %.1f \n", z);
	*c = 2.4;
	printf("REAIS antes: %.1f \n", z);
	printf("CHAR antes: %c \n", y);
	*b = 'n';
	printf("CHAR antes: %c ", y);
	
	return 0;
}


