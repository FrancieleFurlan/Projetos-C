#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double calcular_hipotenusa (double a, double b);

int main(int argc, char *argv[]) {
	
double a, b;
    printf("Informe os catetos (a e b): ");
    scanf("%lf %lf", &a, &b);

    printf("A hipotenusa e: %.2f\n", calcular_hipotenusa(a, b));

	return 0;
}
double calcular_hipotenusa(double a, double b) {
    return sqrt((a * a) + (b * b));
}
