/*
================================================================================================================================
Name: Calcula a área de um quadrado qualquer.
Description: Apresentando como conhecido o seu lado.
Data: 06/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>
#include <math.h>

int main(){
	float lado;
	while(1){
		lado = 0;
		printf("Calcular a área de um quadrado qualquer.\nDigite o lado do quadrado:");
		scanf("%f", &lado);
		if(lado >= 0)
			printf("Portanto, sua área é igual a %.2f.\n", pow(lado,2));
		else 
			printf("O lado deve ser um número do intervalor ]0,+∞[.\n");
	}
	return 0;
}