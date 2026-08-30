#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int Xi[] = {8, 4, 6, 10, 9, 7, 8, 12, 5, 8, 3};
    int n = 11; 
    float xi[11];    
    float xi2[11];  
    float soma_Xi = 0, media, variancia = 0, soma_xi2 = 0;
    int i;

    for(i = 0; i < n; i++) {
        soma_Xi += Xi[i];
    }
    media = soma_Xi / n;

    for(i = 0; i < n; i++) {
        xi[i] = Xi[i] - media;
        xi2[i] = xi[i] * xi[i];
        soma_xi2 += xi2[i]; 
    }

    variancia = soma_xi2 / n;

    printf("Jogador\tAcertos(Xi)\txi\t\t(xi)^2\n");
    printf("------------------------------------------------------\n");
    for(i = 0; i < n; i++) {
        printf("%d\t%d\t\t%.2f\t\t%.2f\n", i + 1, Xi[i], xi[i], xi2[i]);
    }
    printf("------------------------------------------------------\n");

    printf("\nMedia (M): %.2f", media);
    printf("\nVariancia (S): %.2f\n", variancia);
	return 0;
}
