/*
================================================================================================================================
Name: Consumo.
Data: 18/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>

int main(){
	int distancia;
	float combustivel;
	scanf("%d", &distancia);
	scanf("%f", &combustivel);
	printf("%.3f km/l\n", distancia/combustivel);
	return 0;
}