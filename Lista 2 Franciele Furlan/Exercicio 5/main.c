#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	srand (time(NULL));
	int m[4][4];
	int t[4][4];
	int l,c;
	
	printf("Matriz: \n");
	for (l = 0; l<4; l++){
		for(c=0; c< 4; c++){
			
			m[l][c] = rand()%100; 

			printf("%4d ", m[l][c]);
			
		}
		printf("\n");
	}
	
	printf("\nNatriz Transposta: \n");
	for (l=0; l<4; l++){
		for(c=0; c<4; c++){
			m[l][c]=m[c][l];
			
			printf("%4d ", m[c][l]);
		}
		printf("\n");
	}
	return 0;
}
