#include <stdio.h>
#include <stdlib.h>

void separarParesImpares(int X[], int n, int A[], int *tamA, int B[], int *tamB);
int main(int argc, char *argv[]) {
	
    int X[30], A[30], B[30];
    int nA = 0, nB = 0;
    int i;

    for (i = 0; i < 30; i++) {
        X[i] = i + 1;
    }

    separarParesImpares(X, 30, A, &nA, B, &nB);


    printf("Vetor A (Pares - %d elementos):\n", nA);
    for (i = 0; i < nA; i++){
    	 printf("%d ", A[i]);
	}

    printf("\n\nVetor B (Impares - %d elementos):\n", nB);
    for (i = 0; i < nB; i++) {
    	printf("%d ", B[i]);
	}

	
	return 0;
}
void separarParesImpares(int X[], int n, int A[], int *tamA, int B[], int *tamB) {
    int i;
    *tamA = 0; 
    *tamB = 0;

    for (i = 0; i < n; i++) {
        if (X[i] % 2 == 0) {
            
            A[*tamA] = X[i];
            (*tamA)++;
        } else {
            B[*tamB] = X[i];
            (*tamB)++;
        }
    }
}
