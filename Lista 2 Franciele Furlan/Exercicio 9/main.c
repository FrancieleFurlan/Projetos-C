#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
	
	srand (time(NULL));
	
	int matriz[4][4];
    int l, c;
	int soma = 0;
	
	printf("Matriz:\n");
	for (l = 0; l < 4; l++) {
        for (c = 0; c < 4; c++) {
            matriz[l][c] = rand() % 100;
            printf("%3d ", matriz[l][c]);
        }
        printf("\n");
    }
    for (l = 0; l < 4; l++) {
        for (c = 0; c < 4; c++) {
            if (c > l) {
                soma =soma+ matriz[l][c];
            }
        }
    }
	
	printf("\nSoma: %d ", soma);
	
	return 0;
}
