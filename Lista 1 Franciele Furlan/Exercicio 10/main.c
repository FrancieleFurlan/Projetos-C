#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,i;
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if(num!=0){
		for (i=0; i<50;i++){
		if (num %2==0){
			num= num+2;
		}
		else {
			num=num+1;
						}	
		}
		printf("Soma: %d: ", num);
			}
		
return 0;
			}
			
				
		
	
	

