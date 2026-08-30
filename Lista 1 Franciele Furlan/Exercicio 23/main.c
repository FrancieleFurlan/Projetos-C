#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,i;
	
	printf("Digite um numero positivo: ");
	scanf(" %d", &num);
	
	if (num<=0){
		printf("\n O numero não é positivo");
	}
	else {
		for(i=1; i<=num; i++){
			if(num%i==0){
				printf("\n %d",i);
			}
		}
	}
	return 0;
}
