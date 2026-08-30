#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	int v[8];
    int i;
	int cont= 0;

    printf("Vetor: \n");
    for (i = 0; i < 8; i++) {
    	v[i]=rand () % 100;
        printf("%d ",v[i]);
        if (v[i] % 6 == 0) {
            cont++;
        }
    }

    printf("\nTotal multiplos de seis: %d\n", cont);
	
	return 0;
}
