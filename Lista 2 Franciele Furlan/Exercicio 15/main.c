#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x[5] = {2, 7, 4, 3, 2};
    int y[5] = {1, 2, 3, 6, 5};
    
    int somaA = 0;
    int somaB = 0;
    int somaC1 = 0;
    int somaC2 = 0;
    
    int i;

    for (i = 0; i < 5; i++) {
        somaA =somaA+ x[i];
    }

    for (i = 0; i < 5; i++) {
        somaB= somaB + (x[i] * y[i]);
    }
    
    for (i = 1; i <= 3; i++) {
        somaC1 = somaC1 +(x[i] * (y[i] * y[i])); 
    }
    
    for (i = 0; i < 5; i++) {
        somaC2 =somaC2+ 3;
    }

    printf("Soma do A %d\n", somaA);
    printf("Soma do B %d\n", somaB);
    printf("Soma do C %d \n", somaC1 + somaC2);
	return 0;
}
