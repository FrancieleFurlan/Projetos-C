#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, i;

    printf("Digite um numero para geracao da tabuada: ");
    scanf("%d", &num);

    printf("\nTabuada do %d:\n", num); 

    printf("Soma:\n"); 
    for (i=0; i<=10; i++) {
        printf("%d + %d = %d\n", num, i, num + i);
    }

    printf("\nMultiplicacao:\n", num);
    for (i=0; i<=10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
	return 0;
}
