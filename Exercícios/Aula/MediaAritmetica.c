/*
================================================================================================================================
Name: Lê dois número e calcula a média aritmética deles.
Description: Sendo os números inteiros.
Data: 28/04/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>

int main(){
	int numero1, numero2;
	printf("Lê dois número e calcula a média aritmética deles.\nDigite o primeiro número:");
	scanf("%d", &numero1);
	printf("Digite o segundo número:");
	scanf("%d", &numero2);
	printf("A média aritmética é %.2f.\n", (float)(numero1 + numero2) / 2);
	return 0;
}