#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vet[10];
	int valorRef=0;
	int i;
	int cont=0;
	for(i=0; i<10; i++){
		
		printf("Digite um numero para compor o vetor: ");
		scanf("%d", &vet[i]);
	}
	
	printf("Digite um valor refencial: ");
	scanf("%d", &valorRef);
	
	printf("Numeros maiores que o numero ref: ");
    
    for (i=0; i<10; i++)	{
	if (valorRef < vet[i]){
			printf("%d ", vet[i]);
		}
	}
	printf("\nNumeros menores que o numero ref: ");
	for (i=0; i<10; i++){
		if (valorRef > vet[i]){
			printf("%d ", vet[i]);
		}
	}
	printf("\nQtd de vez que o valor referencia aparece no vetor:");
	for(i=0; i<10;i++){
		if(valorRef== vet[i]){
			cont++;
		}
	}
	printf("%d", cont);
	return 0;
}
