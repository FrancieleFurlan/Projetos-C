#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n, i;
    
    printf("Quantos alunos a turma possui? ");
    scanf("%d", &n);

    float av1[n], av2[n], hw[n], medias[n];
    int situacao[n];

    for (i = 0; i < n; i++) {
        printf("\nNotas do aluno %d:\n", i + 1);
        printf("Av1: ");
        scanf("%f", &av1[i]);
        printf("Av2: ");
        scanf("%f", &av2[i]);
        printf("HomeWorks: ");
        scanf("%f", &hw[i]);

        medias[i] = (av1[i] * 0.3 + av2[i] * 0.4 + hw[i] * 0.3);

        if (medias[i] >= 6.0) {
            situacao[i] = 1;
        } else {
            situacao[i] = 2;
        }
    }

    printf("\nID\tAV1\tAV2\tHW\tMEDIA\tSITUACAO\n");
    printf("--------------------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%.1f\t%.1f\t%.1f\t%.1f\t%s\n", 
            i + 1, av1[i], av2[i], hw[i], medias[i], 
            (situacao[i] == 1) ? "Aprovado" : "Reprovado");
    }
	
	return 0;
}
