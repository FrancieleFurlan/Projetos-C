#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int num, numMaior, numMenor;
	numMaior=0;
	numMenor=0;
	
	for (i=0; i<10; i++){
		num = rand () % 100;
				 printf("%d ", num);
			
			if (num >=numMaior){
		     numMaior=num;
		 }
		       if(num<numMenor){
		     	 numMenor=num;
			 }

			}
	 printf("\n Numero maior: %d", numMaior);
	 printf("\n Numero menor: %d ", numMenor);
	return 0;
}
