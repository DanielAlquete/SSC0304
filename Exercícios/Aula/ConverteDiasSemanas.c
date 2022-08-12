/*
================================================================================================================================
Name: Converte dias em semanas.
Description: Sendo o número de dias inteiro.
Data: 28/04/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>

int main(){
	int numero;
	printf("Converte dias em semanas.\nDigite o número de dias:");
	scanf("%d", &numero);
	printf("A quantidade de semanas é %.2f.\n", (float) numero / 7);
	return 0;
}