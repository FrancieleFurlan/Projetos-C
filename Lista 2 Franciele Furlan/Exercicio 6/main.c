#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	
    float v[10];
    float soma = 0, media, somaDesvio = 0, variancia, raiz;
    int i;

    
    printf("Digite 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%f", &v[i]);
        soma= soma+ v[i];
    }
    media = soma / 10; 

    
    for (i = 0; i < 10; i++) {
        float diferenca = v[i] - media;
        somaDesvio = somaDesvio+(diferenca * diferenca); 
    }

    variancia = somaDesvio / 9; 

    raiz = variancia / 2; 
    

    for (i = 0; i < 10; i++) {
        raiz = 0.5 * (raiz + (variancia / raiz));
    }

    printf("\nMedia: %.2f", media);
    printf("\nDesvio Padrao: %.4f\n", raiz);
	return 0;
}
