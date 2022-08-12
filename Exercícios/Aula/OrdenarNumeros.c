/*
================================================================================================================================
Name: Coloca os três números digitados em ordem crescente.
Description: Sendo eles pertencentes ao conjunto dos números inteiros.
Data: 20/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>

int main(){
	int a, b, c;
	while(1){
		a = b = c = 0;
		printf("Coloca os números em ordem crescente.\nDigite o primeiro número:");
		scanf("%d", &a);
		printf("Digite o segundo número:");
		scanf("%d", &b);
		printf("Digite o terceiro número:");
		scanf("%d", &c);
		if(a > b){
			if(b >= c)
				printf("A ordem é %d %d %d.\n", c, b, a);
			else{
				if(a >= c)
					printf("A ordem é %d %d %d.\n", b, c, a);	
				else
					printf("A ordem é %d %d %d.\n", b, a, c);
			}
		}else{
			if(b >= c){
				if(a >= c)
					printf("A ordem é %d %d %d.\n", c, a, b);
				else
					printf("A ordem é %d %d %d.\n", a, c, b);
			}else
				printf("A ordem é %d %d %d.\n", a, b, c);
		}
	}
	return 0;
}