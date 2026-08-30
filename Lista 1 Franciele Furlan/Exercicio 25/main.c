#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
    int soma = 0;

   
    for (i = 1; i < 1000; i++) {
        
        if (i % 3 == 0 || i % 5 == 0) {
            soma =soma+i; 
        }
    }
    printf("A soma de todos os multiplos de 3 ou 5 abaixo de 1000: %d\n", soma);
	return 0;
}
