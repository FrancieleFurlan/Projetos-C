#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
    int codigos[10];
    float valores_unit[10];
    int quantidades[10];
    
    int total_itens = 0;
    float valor_total_vendido = 0;
    float soma_valor_unitario = 0;
    int i, codigo_busca, encontrado = 0;

    for (i = 0; i < 10; i++) {
        printf("Pedido %d  \n", i + 1);
        printf("Codigo do produto: ");
        scanf("%d", &codigos[i]);
        printf("Valor unitario: ");
        scanf("%f", &valores_unit[i]);
        printf("Quantidade vendida: ");
        scanf("%d", &quantidades[i]);
        
        total_itens = total_itens+ quantidades[i];
        valor_total_vendido = valor_total_vendido+ (valores_unit[i] * quantidades[i]);
        soma_valor_unitario = soma_valor_unitario+ valores_unit[i];
        printf("\n");
    }

    printf("\n%-10s %-10s %-10s %-10s\n", "CODIGO", "V. UNIT", "QTD", "TOTAL ITEM");
    for (i = 0; i < 10; i++) {
        printf("%-10d %-10.2f %-10d %-10.2f\n", 
               codigos[i], valores_unit[i], quantidades[i], (valores_unit[i] * quantidades[i]));
    }

    printf("\n ESTATISTICAS \n");
    printf(" Quantidade total de itens vendidos: %d\n", total_itens);
    printf(" Valor total vendido: R$ %.2f\n", valor_total_vendido);
    printf(" Quantidade media de itens por venda: %.2f\n", total_itens / 10.0);
    printf(" Valor unitario medio: R$ %.2f\n", soma_valor_unitario / 10.0);
    printf(" Media do valor total por item: R$ %.2f\n", valor_total_vendido / 10.0);

    printf("\nInforme um codigo para consulta: ");
    scanf("%d", &codigo_busca);

    for (i = 0; i < 10; i++) {
        if (codigos[i] == codigo_busca) {
            printf("\nItem Encontrado:");
            printf("\nCodigo: %d | V. Unit: %.2f | Qtd: %d | Total: %.2f\n", 
                   codigos[i], valores_unit[i], quantidades[i], (valores_unit[i] * quantidades[i]));
            encontrado = 1;
            break; 
        }
    }

    if (!encontrado) {
        printf("\nCodigo %d nao encontrado nos registros.\n", codigo_busca); 
    }
	return 0;
}
