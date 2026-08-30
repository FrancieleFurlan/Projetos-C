#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int lista[10];
	int listaB[50];
	 int i,j;
	 double valorRef;
	 int cont=0;
	 int rep=0;
	 float porcent=0;
	
	for (i=0; i<10; i++){
		lista[i]= rand () % 100;
			printf(" %d ", lista[i]);
	}
	printf("\nDigite um valor de referencia:");
	scanf("%lf", &valorRef);
//	printf("%lf", valorRef);

    printf("Numeros maiores que o numero ref: ");
    
    for (i=0; i<10; i++)	{
	if (valorRef < lista[i]){
			printf("%d ", lista[i]);
		}
	}
	printf("\nNumeros menores que o numero ref: ");
	for (i=0; i<10; i++){
		if (valorRef > lista[i]){
			printf("%d ", lista[i]);
		}
	}
	printf("\nQtd de vez que o valor referencia aparece no vetor:");
	for(i=0; i<10;i++){
		if(valorRef== lista[i]){
			cont++;
		}
	}
	printf("%d", cont);
	
	printf("%nvetor 2");
		for (i=0; i<50; i++){
		listaB[i]= rand () % 100;
			printf(" %d ", listaB[i]);
	}
	printf("\nQtd de numeros repetidos nos vetores:");
	for(i=0; i<50;i++){
		for(j=0;j<10;j++){
			if(listaB[i]== lista[j]){
			rep++;
		}
		}
	}
	printf("%d", rep);
	porcent= (rep/50.0)*100;
	printf("\nPorcentagem dos numeros repetidos: %.2f%%",porcent);
	return 0;
}
