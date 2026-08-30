#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num,i,impar,par;
	num=0;
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if(num!=0){
			if (num %2!=0){
				impar=num;
				for (i=0; i<num;i++){
				impar=impar+2;	
		  	printf("\n %d \n", impar);
				}		
		}
				
				printf("\n %d \n", impar);
			
			}
				return 0;
		}
	


