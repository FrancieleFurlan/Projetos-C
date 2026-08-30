#include <stdio.h>
#include <stdlib.h>


#define DIM_A 20
#define DIM_M 3

void calcularResultante(float A[DIM_A][DIM_A], float M[DIM_M][DIM_M], float R[DIM_A][DIM_A]);


int main(int argc, char *argv[]) {
	
	float A[DIM_A][DIM_A];
    float R[DIM_A][DIM_A];
    int i,j;
    
    float M[DIM_M][DIM_M] = {
        {1, 0, 1},
        {0, 1, 0},
        {1, 0, 1}
    };


    int cont = 1;
    for (i = 0; i < DIM_A; i++) {
        for (j = 0; j < DIM_A; j++) {
            A[i][j] = cont++;
        }
    }

    calcularResultante(A, M, R);

    printf("Matriz Resultante R (primeiros 5x5 elementos):\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%.3f\t", R[i][j]);
        }
        printf("\n");
    }
	
	return 0;
}
void calcularResultante(float A[DIM_A][DIM_A], float M[DIM_M][DIM_M], float R[DIM_A][DIM_A]) {
    int i, j, k, l;

    for (i = 0; i < DIM_A; i++) {
        for (j = 0; j < DIM_A; j++) {
            float soma = 0;
            
            for (k = 0; k < DIM_M; k++) {
                for (l = 0; l < DIM_M; l++) {
                    soma += A[i][j] * M[k][l];
                }
            }
            R[i][j] = soma / 9.0;
        }
    }
}
