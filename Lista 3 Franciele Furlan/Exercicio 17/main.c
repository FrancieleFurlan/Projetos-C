#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct Ponto {
    float x;
    float y;
};
float calcularDistancia(struct Ponto p1, struct Ponto p2);

int main(int argc, char *argv[]) {
	
	struct Ponto pontoA, pontoB;

    printf("Dados do Ponto 1 (x y): ");
    scanf("%f %f", &pontoA.x, &pontoA.y);

    printf("Dados do Ponto 2 (x y): ");
    scanf("%f %f", &pontoB.x, &pontoB.y);

    float d = calcularDistancia(pontoA, pontoB);
    printf("\nA distancia entre os pontos e: %.4f\n", d);
    
	return 0;
}
float calcularDistancia(struct Ponto p1, struct Ponto p2) {
    float termoX = p2.x - p1.x;
    float termoY = p2.y - p1.y;
    
    return sqrt((termoX * termoX) + (termoY * termoY));
}
