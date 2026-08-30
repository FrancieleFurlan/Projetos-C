#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1,num2,temp,i;
	int somaPar=0;
	int multImpar=1;
	
	printf("Digite um numero ");
	scanf("\n %d", &num1);
	
	printf("\nDigite um numero ");
	scanf("\n %d", &num2);
	//printf("\n %d %d", num1,num2);
	
	if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
	
	for (i =num1;i<=num2;i++) {
        if (i %2==0) { 
            somaPar=somaPar+i;
        } else {
            multImpar=multImpar*i;
        }
    }
	printf("\n Soma dos numeros pares:  %d", somaPar);
	printf("\n Multiplicacao dos impares:  %d", multImpar); 
	return 0;
}

