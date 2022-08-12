/*
================================================================================================================================
Name: Lanche.
Data: 20/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>

int main(){
	int id, qtd;
	scanf("%d %d", &id, &qtd);
	switch(id){
		case 1:
			printf("Total: R$ %.2f\n", (float)4*qtd);
			break;
		case 2:
			printf("Total: R$ %.2f\n", 4.5*qtd);
			break;
		case 3:
			printf("Total: R$ %.2f\n", (float)5*qtd);
			break;
		case 4:
			printf("Total: R$ %.2f\n", (float)2*qtd);
			break;
		case 5:
			printf("Total: R$ %.2f\n", (float)1.5*qtd);
			break;
	}
	return 0;
}