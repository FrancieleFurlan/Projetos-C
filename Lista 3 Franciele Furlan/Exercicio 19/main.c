#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numero;
    char titular[50];
    float saldo;
} Conta;

void depositar(Conta *c, float valor);
int sacar(Conta *c, float valor);
void exibirConta(Conta c);


int main(int argc, char *argv[]) {
	
	Conta minhaConta;
	float valorOp;

    
    minhaConta.numero = 4321;
    strcpy(minhaConta.titular, "Franciele Furlan");
    minhaConta.saldo = 500.00;

    exibirConta(minhaConta);

    printf("\nDigite o valor para deposito: ");
    scanf("%f", &valorOp);
    depositar(&minhaConta, valorOp); 
    printf("Novo saldo: R$ %.2f\n", minhaConta.saldo);

    printf("\nDigite o valor para saque: ");
    scanf("%f", &valorOp);
    if (sacar(&minhaConta, valorOp)) {
        printf("Saque realizado com sucesso!\n");
    } else {
        printf("Erro: Saldo insuficiente para o saque de R$ %.2f\n", valorOp);
    }
    
    printf("Saldo final: R$ %.2f\n", minhaConta.saldo);
	return 0;
}
void depositar(Conta *c, float valor) {
    if (valor > 0) {
        c->saldo += valor; 
        printf("Deposito de R$ %.2f realizado!\n", valor);
    }
}
int sacar(Conta *c, float valor) {
    if (valor <= c->saldo) {
        c->saldo -= valor;
        return 1; 
    } else {
        return 0; 
    }
}
void exibirConta(Conta c) {
    printf("\n--- Dados da Conta ---");
    printf("\nNumero: %d", c.numero);
    printf("\nTitular: %s", c.titular);
    printf("\nSaldo Atual: R$ %.2f\n", c.saldo);
    printf("----------------------\n");
}
