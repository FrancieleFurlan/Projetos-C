#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int vetor[20];
	for (i=0; i<20; i++){
		vetor[i]= rand () % 100;
			printf(" %d ", vetor[i]);
	}
	printf("\n Vetor em ordem inversa:\n");
	for (i=19; i>=0; i--){
		printf(" %d ",vetor[i]);
	}
	return 0;
}
