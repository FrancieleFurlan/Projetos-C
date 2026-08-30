#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	srand (time(NULL));
	int m[10][10];
	int l,c;
	
	printf("Matriz: \n");
	for (l = 0; l<10; l++){
		for(c=0; c< 10; c++){
			
			m[l][c] = rand()%1000; 
			printf("%d ", m[l][c]);
		}
	}
	printf("\n");
	printf("Matriz Elementos nao Nulos: ");
	for(l=0; l<10; l++){
		for (c=0; c<10; c++){
			if(m[l][c]!=0){
				printf("Linha %d Coluna %d -> Valor: %d\n", l, c, m[l][c]);
			}
		}
	}
	return 0;
}

