#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    char nome[50];
    int matricula;
    float nota1;
    float nota2;
}; 


typedef struct Aluno aluno;

aluno cadastrarAluno();
float calcularMedia(aluno a);
void exibirAluno(aluno a);

int main(int argc, char *argv[]) {
    aluno turma[3]; 
    int i;
    
    for (i = 0; i < 3; i++) {
        turma[i] = cadastrarAluno();
    }

    printf("\n\n LISTA DE ALUNOS ");
    for (i = 0; i < 3; i++) {
        exibirAluno(turma[i]);
    }
    
    return 0;
}

aluno cadastrarAluno() {
	
	aluno a;
    printf("\n--- Cadastro de Aluno ---\n");
    printf("Nome: ");
    scanf(" %[^\n]s", a.nome); 
    printf("Matricula: ");
    scanf("%d", &a.matricula);
    printf("Nota 1: ");
    scanf("%f", &a.nota1);
    printf("Nota 2: ");
    scanf("%f", &a.nota2);
    return a;
}

float calcularMedia(aluno a) {
    return (a.nota1 + a.nota2) / 2.0;
}

void exibirAluno(aluno a) {
    printf("\nMatricula: %d", a.matricula);
    printf("\nNome: %s", a.nome);
    printf("\nMedia: %.2f\n", calcularMedia(a));
    
}
