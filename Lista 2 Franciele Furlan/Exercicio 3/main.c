#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	
	double m [10][10];
	int l, c, il, ic, vi;
	
	
	
	for (l = 0; l<10; l++){
		for( c=0; c< 10; c++){
			
			m[l][c] = 0; 
		}
	}
	printf("Matriz:");
	for (l = 0; l<10; l++){
		printf("\n"); 
			for( c=0; c<10; c++){
				
				printf ("%f ", m[l][c]);
			}
}
printf("\nDigite um valor de indice da linha: ");
scanf("%d",&il);
printf("\nDigite um valor de indice da coluna: ");
scanf("%d",&ic);
printf("\nDigite um valor para ser inserido: ");
scanf("%d",&vi);

while (il>0 && ic>0){
	l=il;
	c=ic;
	m[l][c]=vi;
	
	printf("\nDigite um valor de indice da linha: ");
    scanf("%d",&il);
    printf("\nDigite um valor de indice da coluna: ");
    scanf("%d",&ic);
    printf("\nDigite um valor para ser inserido: ");
    scanf("%d",&vi);
}
printf("Matriz:");
	for (l = 0; l<10; l++){
		printf("\n"); 
			for( c=0; c<10; c++){
				
				printf ("%f ", m[l][c]);
			}
}


	return 0;
}
