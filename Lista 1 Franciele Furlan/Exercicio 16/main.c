#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int w[10], k[10];
    int i, opcao, soma = 0;

    printf("Escolha como preencher os vetores:\n");
    printf("1 - Informar manualmente\n");
    printf("2 - Gerar aleatoriamente\n");
    scanf("%d", &opcao); 

    for (i = 0; i < 10; i++) {
        if (opcao == 1) {
            printf("Digite w[%d] e k[%d]: ", i, i); 
            scanf("%d %d", &w[i], &k[i]);
        } else {
            w[i] = rand() % 100; 
            k[i] = rand() % 100;
        }
    }

    printf("\nVetor W: ");
    for(i=0; i<10; i++) printf("%d ", w[i]);
    printf("\nVetor K: ");
    for(i=0; i<10; i++) printf("%d ", k[i]);

    for (i = 0; i < 10; i++) {
        soma += (w[i] + k[9 - i]);
    }

    printf("\n\nO resultado da soma: %d\n", soma);
	return 0;
}
