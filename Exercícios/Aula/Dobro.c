/*
================================================================================================================================
Name: Lê um número e calcula o seu dobro.
Description: Sendo um número inteiro.
Data: 28/04/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>

int main(){
	int numero;
	printf("Lê um número e calcula o seu dobro.\nDigite o número:");
	scanf("%d", &numero);
	printf("O dobro do número %d é %d.\n", numero, 2 * numero);
	return 0;
}