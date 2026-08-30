#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct informacao{
	int matricula;	
	char nome [70];
	float n1;
	float n2;
	float n3;
};

int main(int argc, char *argv[]) {
	
	int i, j;
    struct informacao dados[5];
    int maiorN1 = 0;
    int maiorMedia = 0;
    int menorMedia = 0;
    float medias[5];

for (i=0; i<5; i++){
	printf("Digite o n de matricula do aluno:\n ");
	scanf("%d", &dados[i].matricula);
	printf("Digite o nome do aluno:");
	scanf(" %s", &dados[i].nome);
	printf("Digite a primeira nota:\n ");
	scanf("%f", &dados[i].n1);
	printf("Digite a segunda nota:\n ");
	scanf("%f", &dados[i].n2);
	printf("Digite a terceira nota:\n ");
	scanf("%f",&dados[i].n3);
	
	medias[i] = (dados[i].n1 + dados[i].n2 + dados[i].n3) / 3.0;
	
	if(dados[i].n1 > dados[maiorN1].n1){
		maiorN1=i;
	}
}

for (i = 1; i < 5; i++) {
        if (medias[i] > medias[maiorMedia]) {
            maiorMedia = i;
        }
        if (medias[i] < medias[menorMedia]) {
            menorMedia = i;
        }
    }
	
	printf("\nMaior nota na Prova 1: %.2f (Aluno: %s)", 
            dados[maiorN1].n1, dados[maiorN1].nome);

    printf("\nMaior Media Geral: %.2f (Aluno: %s)", 
            medias[maiorMedia], dados[maiorMedia].nome);

    printf("\nMenor Media Geral: %.2f (Aluno: %s)", 
            medias[menorMedia], dados[menorMedia].nome);

    printf("\n\n--- Situacao Final ---");
    for (i = 0; i < 5; i++) {
        printf("\n%s - Media: %.2f - %s", 
                dados[i].nome, medias[i], 
                (medias[i] >= 6.0) ? "APROVADO" : "REPROVADO");
    }
	
	return 0;
}
