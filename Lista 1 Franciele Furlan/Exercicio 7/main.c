#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int num;
	int soma=0;
	int cont=0;
	for (i=0; i<10; i++){
	printf(" Digite um numero: \n");
	scanf("%d", &num);
	if(num>0){
	  soma=soma+num;
	  cont++;
	  }
	}
	float media=0;
	media= soma/cont;
	printf("\n Media: %.2f ", media);
	return 0;
}
