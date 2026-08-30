#include <stdio.h>
#include <stdlib.h>

double calcularFatorial(int num);
double fatorialQuadruplo(int n);

int main(int argc, char *argv[]) {
	
	int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, digite um numero positivo.\n");
    } else {
        double resultado = fatorialQuadruplo(n);
        printf("O fatorial quadruplo de %d e: %.0f\n", n, resultado);
    }
	
	return 0;
}
double calcularFatorial(int num) {
	int i;
    double fat = 1;
    for (i = 1; i <= num; i++) {
        fat *= i;
    }
    return fat;
}
double fatorialQuadruplo(int n) {
    double numerador = calcularFatorial(2 * n);
    double denominador = calcularFatorial(n);
    
    return numerador / denominador;
}
