#include <stdio.h>
#include <stdlib.h>

float calcularMedia(float v[], int n);
float calcularDesP(float v[], int n);

int main(int argc, char *argv[]) {
	
	int i,j;

    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &i);

    if (i <= 1) {
        printf("Erro: O desvio padrao requer pelo menos 2 elementos.\n");
        return 1;
    }

    float vetor[i];
    for (j = 0; j < i; j++) {
        printf("Elemento [%d]: ", j);
        scanf("%f", &vetor[j]);
    }

    printf("\nMedia: %.2f", calcularMedia(vetor, i));
    printf("\nDesvio Padrao: %.4f\n", calcularDesP(vetor, i));
	
	return 0;
}
float calcularMedia(float v[], int n){
	float soma = 0;
	int i;
	float media=0;
    for (i = 0; i < n; i++) {
        soma += v[i];
    }
    media= soma/n;
    return media;
}
float calcularDesP(float v[], int n){
	int i;
	int somaDesvio=0;
	float media = calcularMedia(v, n);
	 for (i = 0; i < n; i++) {
        float diferenca = v[i] - media;
        somaDesvio += (diferenca * diferenca); 
    }
    
    float variancia = somaDesvio / (n - 1); 

    float raiz = variancia / 2; 
    if (variancia > 0) {
        for (i = 0; i <n; i++) {
            raiz = 0.5 * (raiz + (variancia / raiz));
        }
    } else {
        raiz = 0;
    }
    
    return raiz;
}
