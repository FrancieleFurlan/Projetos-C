#include <stdio.h>
#include <stdlib.h>

struct aeroporto{
	int codigo;
	int qtdChega;
	int qtdSaida;
};
struct voo{
	
	int codOrigem;
    int codDestino;
	
};
int main(int argc, char *argv[]) {
	
	
struct aeroporto A[5];
    struct voo V[5];
    int i, j;
    
    for (i = 0; i < 5; i++) {
        A[i].codigo = i;
        A[i].qtdChega = 0;
        A[i].qtdSaida = 0;
    }
	
	

    printf(" Cadastro de Voos \n");
    for (i = 0; i < 5; i++) {
        printf("\nVoo %d:\n", i + 1);
        
    
        do {
            printf("Codigo do aeroporto de origem (0 a 4): ");
            scanf("%d", &V[i].codOrigem);
            if (V[i].codOrigem < 0 || V[i].codOrigem >= 5) 
                printf("Codigo inexistente! Tente novamente.\n");
        } while (V[i].codOrigem < 0 || V[i].codOrigem >= 5);

        do {
            printf("Codigo do aeroporto de destino (0 a 4): ");
            scanf("%d", &V[i].codDestino);
            if (V[i].codDestino < 0 || V[i].codDestino >= 5) 
                printf("Codigo inexistente! Tente novamente.\n");
        } while (V[i].codDestino < 0 || V[i].codDestino >= 5);

        A[V[i].codOrigem].qtdSaida++;
        
        A[V[i].codDestino].qtdChega++;
    }

    printf("\n Relatorio de Aeroportos \n");
    printf("Cod\tSaidas\tChegadas\n");
    for (i = 0; i < 5; i++) {
        printf("%d\t%d\t%d\n", A[i].codigo, A[i].qtdSaida, A[i].qtdChega);
    }

	
	return 0;
}
