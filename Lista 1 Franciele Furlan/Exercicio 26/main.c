#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, i;

    printf("Digite um numero: ");
    scanf("%d", &num);

  
    i = num+1;

    
    while (!(i % 11 == 0 || i % 13 == 0 || i % 17 == 0)) {
        i++;
    }

    printf("O primeiro multiplo de 11, 13 ou 17 apos %d e: %d\n", num, i);
	return 0;
}
