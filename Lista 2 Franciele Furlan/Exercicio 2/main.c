#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	
	double m1 [2][3];
	double m2 [2][3];
	int l, c;
	double soma=0;
	
	
	
	for (l = 0; l<2; l++){
		for( c=0; c< 3; c++){
			
			m1[l][c] = rand() %100; 
			m2[l][c] = rand() %100;
		}
	}
	
	for (l = 0; l<2; l++){
		printf("\n"); 
			for( c=0; c< 3; c++){
				
				printf ("%lf ", m1[l][c]);
			}	
	}
	printf("\n");
	for (l = 0; l<2; l++){
		printf("\n"); 
			for( c=0; c< 3; c++){
				
				printf ("%lf ", m2[l][c]);
			}	
	}
	printf("\nSoma:\n");
	for(l=0; l<2; l++){
		printf("\n");
		for (c= 0; c<3; c++){
			soma= m1[l][c]+m2[l][c];
			printf("%f ", soma);

		}
	}
	
	return 0;
}
