#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	struct informacao{
	int matricula;	
	char nome [70];
	int codDiscip;
	float n1;
	float n2;
	float media;
};
int main(int argc, char *argv[]) {
int i;
struct informacao dados[10];

for (i=0; i<10; i++){
	printf("Digite o n de matricula do aluno:\n ");
	scanf("%d", &dados[i].matricula);
	printf("Digite o nome do aluno:\n ");
	scanf("%s", &dados[i].nome);
	printf("Digite o codigo da disciplina:\n ");
	scanf("%d", &dados[i].codDiscip);
	printf("Digite a primeira nota:\n ");
	scanf("%f", &dados[i].n1);
	printf("Digite a segunda nota:\n ");
	scanf("%f", &dados[i].n2);
	
	dados[i].media = ((dados[i].n1*10)+(dados[i].n2*20))/3;
}
	printf("Aluno:           Media: \n");
	for(i=0; i<3;i++){
		printf("%s    %.2f\n", dados[i].nome, dados[i].media);
	}

	return 0;
}
