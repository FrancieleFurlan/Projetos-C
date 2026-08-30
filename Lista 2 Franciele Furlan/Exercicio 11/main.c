#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	int l,c;
	int m[4][4];
	
	printf("Matriz: \n");
	for (l = 0; l < 4; l++) {
        for (c = 0; c < 4; c++) {
            m[l][c] = rand() % 20;
            printf("%3d ",m[l][c]);
        }
        printf("\n");
    }
    printf("Matriz triandgular: \n");
	for (l = 0; l < 4; l++) {
        for (c = 0; c < 4; c++) {
            if (c > l) {
                m[l][c] = 0;
            }
            printf("%3d ",m[l][c]);
        }
        printf("\n");
    }
	
	return 0;
}
