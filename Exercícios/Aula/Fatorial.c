/*
================================================================================================================================
Name: Calcula o fatorial de um número.
Description: Com o uso da definição.
Data: 27/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>

int main(){
	int valor1, resultado = 1;
	printf("Calcula o fatorial de número.\nDigite o número:");
	scanf("%d", &valor1);
	for(;valor1 != 0; valor1--)
		resultado = resultado * valor1;
	printf("O resultado é %d\n", resultado);
	return 0;
}