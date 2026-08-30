#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int n, i;
    double h = 0.0;

    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O valor deve ser positivo.\n");
    } else {
        for (i = 1; i <= n; i++) {
            h += 1.0 / i;
        }

        printf("O valor do numero harmonico H(%d) e: %.5f\n", n, h); 
    }
	return 0;
}
