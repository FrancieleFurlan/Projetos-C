#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	double m[10][10]; 
    int l, c;

    for (l = 0;l< 10; l++) {
        for (c=0; c<10; c++) {
            
            if (l < c) {
                m[l][c] = (2 * l) + (7 * c) - 2;
            } 
            else if (l == c) {
                m[l][c] = (3 * (l * l)) - 1;
            } 
            else { 
                m[l][c] = (4 * (l * l * l)) - (5 * (c * c)) + 1;
            }
        }
    }

    printf("Matriz:\n\n");
    for (l=0; l<10; l++) {
        for (c=0; c<10; c++) {
            printf("%5.0f ", m[l][c]);
        }
        printf("\n");
    }
	return 0;
}
