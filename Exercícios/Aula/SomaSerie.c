/*
================================================================================================================================
Name: Calcula o valor de uma determinada série.
Description:Sendo ela do slide da aula 6.
Data: 27/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include<stdio.h>

int main(){
	float soma = 0;
	printf("Calcula o valor de uma determinada série.\n");
	for(int i =0; i <= 49; i++)
		soma += (float)((2*i)+1)/(i + 1);
	printf("O resultado da soma da série é %.2f.\n", soma);
	return 0;
}