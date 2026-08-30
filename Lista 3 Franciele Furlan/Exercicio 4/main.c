#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct dados{
	char aluno [60];
	int mat;
	char curso [50];
};


int main(int argc, char *argv[]) {
	int i;
	struct dados al[5];
	
	for (i=0; i<3; i++){
		
		printf("Digite o nome do aluno: \n");
		scanf(" %[^\n]s", &al[i].aluno);
		
		printf("Digite o numero da matricula: \n");
		scanf("%d", &al[i].mat);
		
		printf("Digite o curso:\n");
		scanf(" %[^\n]s", &al[i].curso);
	}
	
	printf("\n\n%-30s | %-12s | %-20s\n", "NOME", "MATRICULA", "CURSO");
	for (i=0; i<5; i++){
		printf("%-30s | %-12d | %-20s\n", al[i].aluno, al[i].mat, al[i].curso);
	}
	
	return 0;
}
