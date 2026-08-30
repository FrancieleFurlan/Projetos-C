#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	char v[10];
	int i;
	
	
	printf("Digite 10 letras: ");	
	for(i=0; i<10; i++){
			scanf(" %c",&v[i]);
	}
	
	printf("Ordem inversa: \n");
	for(i=9; i>=0; i--){
		printf("%c", v[i]);
	}
	
	return 0;
}
