#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int soma =1;
	for (i=0; i<100; i++){
	printf("%d ", soma);
	soma= soma+1;
	}
	
	printf("\n");
	
	int contagem = 1;
	while (contagem <= 100){
	printf("%d ", contagem);
	contagem= contagem +1;	
	}
	
	printf("\n");

	int numeros = 1;

	do {
		printf("%d ", numeros);
		numeros= numeros + 1;
		
	} while (numeros <= 100);
	return 0;
}
