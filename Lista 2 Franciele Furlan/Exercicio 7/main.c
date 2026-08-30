#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	
	int m1[4][4];
	int m2[4][4];
	int m3[4][4];
	
	int l,c,i;
	
	
	for (l=0; l<4; l++){
		for (c=0; c<4; c++){
			
			m1[l][c]= rand()%100;
			m2[l][c]= rand()%100;
			
		//	printf("%4d ", m1[l][c], m2[l][c];
			
			if (m1[l][c]> m2[l][c]){
			m3[l][c]=m1[l][c];
			}
		     else{
			m3[l][c]=m2[l][c];
		}
		}
	}
		printf("\n");
		printf("Matriz 1 : \n");
		for (l = 0; l < 4; l++) {
        for (c = 0; c < 4; c++) {
            printf("%4d", m1[l][c]);
        }
            printf("\n");
    }
    printf("Matriz 2: \n");
    for (l=0; l<4; l++){
    	for (c=0; c<4; c++){
        printf("%4d",m2[l][c]);
		}
		    printf("\n");
	}
	printf("Matriz Resultante:\n");
	for (l = 0; l < 4; l++) {
        for (c = 0; c < 4; c++) {
            printf("%4d ", m3[l][c]); // 
        }
        printf("\n"); 
    }
	
	return 0;
}
