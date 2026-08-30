#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct dados{
	char nome [50];
	int idade;
	char sexo[2];
	char cpf[15];
	int dnasc, mnasc, anasc;
	int codSetor;
	char cargo [30];
};

int main(int argc, char *argv[]) {
	
	int i;
	struct dados fun;
	
	printf("Digite o nome do funcionario:\n ");
	scanf(" %[^\n]s ",fun.nome);
	
	printf("Digite a idade:\n ");
	scanf("%d", &fun.idade);
	
	printf("Digite o sexo do funcionario F/M:\n ");
	scanf(" %s", fun.sexo);
	
	printf("Digite o cpf (somente numeros):");
	scanf(" %s", fun.cpf);
	
	printf("Digite oa data de nascimento (dd/mm/aa):\n");
	scanf("%d %d %d", &fun.dnasc, &fun.mnasc, &fun.anasc);
	
	printf("Digite o codigo do setor: \n");
	scanf("%d", &fun.codSetor);
	
	printf("Digite o cargo: \n");
	scanf(" %[^\n]s", fun.cargo);
	
printf("\n%-20s %-5s %-5s %-15s %-12s %-10s %-15s\n", 
       "NOME", "IDADE", "SEXO", "CPF", "DATA NASC.", "SETOR", "CARGO");

printf("%-20s %-6d %-5s %-15s %02d/%02d/%-6d %-10d %-15s\n",fun.nome,fun.idade,fun.sexo,fun.cpf, fun.dnasc, fun.mnasc, fun.anasc,fun.codSetor,fun.cargo);

	return 0;
}
