#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct horario {
    int hr;
    int min;
    int seg;
};

struct data {
    int dd;
    int mm;
    int aa;
};

struct agenda {
    struct data data;       
    struct horario horario; 
    char descricao[150];
};

int main(int argc, char *argv[]) {
	
	struct agenda a1;
	
	printf("Digite a data do compromisso (dia mes ano): \n");
	scanf("%d %d %d", &a1.data.dd,&a1.data.mm, &a1.data.aa);
	
	printf("Digite a hora do compromisso: \n");
	scanf("%d %d %d", &a1.horario.hr, &a1.horario.min, &a1.horario.seg);
	
	printf("Digite a descriçao do compromisso: \n");
	scanf(" %[^\n]s", &a1.descricao);
	
	printf("\nAgenda: \n");
	printf("\nData: %02d/%02d/%d", a1.data.dd, a1.data.mm, a1.data.aa);
    printf("\nHorario: %02d:%02d:%02d", a1.horario.hr, a1.horario.min, a1.horario.seg);
    printf("\nDescricao: %s\n", a1.descricao);
	
	return 0;
}
