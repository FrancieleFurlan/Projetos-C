#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int alunos[5][4];
    int i;
    int matriculaMaiorNota;
    int maiorNotaFinal = -1; 
    float somaNotasFinais = 0;

   
    for (i = 0; i < 5; i++) {
        printf("\n Dados do Aluno %d \n", i + 1);
        printf("Numero de matricula: ");
        scanf("%d", &alunos[i][0]);
        
        printf("Media das provas: ");
        scanf("%d", &alunos[i][1]);
        
        printf("Media dos trabalhos: ");
        scanf("%d", &alunos[i][2]);

      
        alunos[i][3] = alunos[i][1] + alunos[i][2];
        
        
        somaNotasFinais += alunos[i][3];

       
        if (alunos[i][3] > maiorNotaFinal) {
            maiorNotaFinal = alunos[i][3];
            matriculaMaiorNota = alunos[i][0];
        }
    }


    
  
    printf("Matricula do aluno com maior nota final: %d (Nota: %d)\n", matriculaMaiorNota, maiorNotaFinal);

    float mediaGeral = somaNotasFinais / 5;
    printf("Media aritmetica das notas finais: %.2f\n", mediaGeral);
    
;
	return 0;
}
