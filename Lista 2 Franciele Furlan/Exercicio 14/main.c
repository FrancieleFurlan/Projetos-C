#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	int c[15];
	int i,buscar;
	int encontrado=0;
	
	for(i=0; i<15; i++){
		c[i]=rand () % 100;
		printf("%d ",c[i]);
	}
	
	printf("\nDigite um numero: ");
	scanf("%d", &buscar);
	
	for(i=0; i<15; i++){
		if(buscar==c[i]){
			encontrado=1;
		printf("Encontrado: %d", i);
		}
	}
	if(encontrado == 0){
		printf("Nao encontrado!");
	}
	
	return 0;
}
