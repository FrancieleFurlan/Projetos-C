#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	float x[5], y[5];
    float produtoEscalar = 0;
    int i;
    
    printf("Digite os 5 elementos do primeiro conjunto (x):\n");
    for (i = 0; i < 5; i++) {
        printf("X[%d]: ", i);
        scanf("%f", &x[i]);
    }
	printf("\nDigite os 5 elementos do segundo conjunto (y):\n");
    for (i = 0; i < 5; i++) {
        printf("Y[%d]: ", i);
        scanf("%f", &y[i]);
    }
    for (i = 0; i < 5; i++) {
        produtoEscalar += (x[i] * y[i]);
    }
    printf("\nConjunto X:  ");
    for (i = 0; i < 5; i++) {
    	printf("%.2f ", x[i]);
	}
    
    printf("\nConjunto Y:  ");
    for (i = 0; i < 5; i++){
	printf("%.2f ", y[i]);
	}
	printf("\n\nProduto Escalar: %.2f\n", produtoEscalar);
    
	return 0;
}
