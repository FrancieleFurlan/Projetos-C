#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct endereco{
	
	char cidade[50];
	char rua [100];
	int num;
};
typedef struct endereco Endereco;

struct pessoa{
	
	char nome[70];
	int idade;
	struct endereco ender;
	
}; 

int main(int argc, char *argv[]) {
	
	
	struct pessoa p1;
	int i;
	
	printf("Nome da pessoa: ");
	scanf("%s", &p1.nome);
	
	printf("\nIdade: ");
	scanf("%d", &p1.idade);

    printf("Endereco (Cidade, Rua e Numero): \n");
    
    scanf(" %[^\n]s", p1.ender.cidade);
    scanf(" %[^\n]s", p1.ender.rua);
    scanf("%d", &p1.ender.num);
	
    
        printf("\n nome: %s", p1.nome);          // SEM o &
        printf("\n idade: %d", p1.idade);         // COM o & no scanf, mas SEM no printf
        printf("\n endereco: %s, %s, %d", p1.ender.cidade, p1.ender.rua, p1.ender.num);
    
	
	return 0;
}
