#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,i;
	int soma=0;
	
	printf("Digite um numero inteiro: ");
	scanf(" %d", &num);
	
	if(num>0){
		for (i=1; i<num; i++){
			if (num % i==0){
				soma=soma+i;
			//	if (i == 1){
			//		printf("%d", i);
			//	}
			//	else{
			//		printf(" + %d", i);
			//	}
			}
		}
		 printf("\n%d ",soma);
	}
	else{
		printf("\nNão é um numero inteiro"); 
	}
	
	return 0;
}
