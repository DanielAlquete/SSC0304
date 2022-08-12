/*
================================================================================================================================
Name: Com um número, calcula a soma do sucessor de seu triplo com o antecessor de seu dobro.
Description: Sendo esse número pertencente ao conjunto dos números inteiros.
Data: 06/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>

int main(){
	int numero;
	while(1){
		numero = 0;
		printf("Calcula, com um número inteiro, a soma do sucessor de seu triplo com o antecessor de seu dobro.\nDigite o número:");
		scanf("%d", &numero);
		printf("Portanto, o resultado é %d.\n", 5*numero);
	}
	return 0;
}