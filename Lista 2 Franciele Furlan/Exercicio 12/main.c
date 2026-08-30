#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	
	int cartela[5][5];
    int i, j, k, l, novo_numero, repetido;
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) { 
            do {
                repetido = 0;
                novo_numero = rand() % 100; 

            for (k = 0; k <= i; k++) {
            for (l = 0; l < (k == i ? j : 5); l++) {
             if (cartela[k][l] == novo_numero) {
                repetido = 1;
                break;
                }
              }
            if (repetido) break;
                }
            } while (repetido);

    cartela[i][j] = novo_numero;
        }
    }

    
    printf("---------------------------\n");
    printf("      CARTELA DE BINGO     \n");
    printf("---------------------------\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("(%02d) ", cartela[i][j]);
        }
        printf("\n");
    }
    printf("---------------------------\n");
    
	
	return 0;
}
