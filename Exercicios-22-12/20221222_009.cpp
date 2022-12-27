#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "");
  	int x, y, n, m;        
  	int xmax, ymax;
  	int count, total;

  	printf("Digite m: ");
  	scanf ("%d", &m);
  
  	printf("Digite n: ");
  	scanf ("%d", &n);

  	xmax = ymax = 0;
  	total = 0;

  	for (x = 0; x <= m; x++){
      	for (y = 0; y <= n; y++){
          	count = x*y - x*x + y;
          	if (count > total){
              	total = count;
              	xmax = x;
              	ymax = y;
	    		}
			}  
    	}
    	
  	printf("Valor maximo: %d em x = %d e y = %d\n", total, xmax, ymax);
    
  	return 0;
} 
