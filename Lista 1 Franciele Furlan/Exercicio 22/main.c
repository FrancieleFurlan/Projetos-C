#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float nota, soma = 0, media;
    int quantidade = 0;

    printf("Calculo de Media\n");
    printf("Digite uma nota fora do intervalo 10-20 para encerrar.\n");

    while (1) {
        printf("Digite uma nota: ");
        scanf("%f", &nota);

        if (nota >= 10 && nota <= 20) {
            soma = soma+nota;     
            quantidade++;      
        } else {
            break; 
        }
    }

    if (quantidade > 0) {
        media = soma/quantidade;
        printf("\nResultado ");
        printf("\nQuantidade de notas: %d", quantidade);
        printf("\nMedia aritmetica: %.2f\n", media);
    } else {
        printf("\nNenhuma nota valida foi introduzida.\n");
    }
	return 0;
}
