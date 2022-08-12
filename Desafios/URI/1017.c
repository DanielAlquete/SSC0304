/*
================================================================================================================================
Name: Gasto de Combustível.
Data: 18/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>

int main(){
	int tempo, velocidade;
	scanf("%d", &tempo);
	scanf("%d", &velocidade);
	printf("%.3f\n", (float)(velocidade*tempo)/12);
	return 0;
}