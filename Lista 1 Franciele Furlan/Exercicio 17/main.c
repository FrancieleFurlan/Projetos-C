#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void preencherVet(int v[], int n);
void imprimirVet (int v[], int n);

int main(int argc, char *argv[]) {
	int i,j=0;
	int vetA[20];
	int vetB[20];
	int vetC[40];
	int marcador[51]={0};
	
	
	preencherVet (vetA,20);
	preencherVet (vetB,20);
	
	imprimirVet (vetA,20);
	imprimirVet (vetB,20);
	
	
	for(i=0; i<20;i++){
		marcador[vetA[i]]=1;
		marcador[vetB[i]]=1;
	}
	for (i=0; i<= 50; i++){
		if (marcador[i]==1){
			vetC[j]=i;
			j++;
		}
	}
	printf("\nVetor C: ");
	for (i=0; i<j; i++){
		printf(" %d", vetC[i]);
	}
	return 0;
}
void preencherVet(int v[], int n){
	int i;
	for (i=0; i<n; i++){
		v[i]= rand ()%51;
	}
}
void imprimirVet (int v[], int n){
	int i;
	printf("\nVetor: \n");
	for (i=0; i<n; i++){
		printf(" %d", v[i]);
	}
}	

