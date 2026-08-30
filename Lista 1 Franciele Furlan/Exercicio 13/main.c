#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int w[100];
	int i,j;
	for (i=0; i<100; i++){
		w[i]= rand () % 100;
			printf(" %d ", w[i]);
	}
	printf("\n Numeros primos:");
    for (i = 0; i < 100; i++) {
        if (w[i] < 2);

        for (j=2; j <w[i]; j++) {
            if (w[i] % j==0)break; 
        }

        if (j==w[i]) {
            printf("%d ", w[i]);
        }
    }
	return 0;
}
