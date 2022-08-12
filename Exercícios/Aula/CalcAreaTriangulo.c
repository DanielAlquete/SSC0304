/*
================================================================================================================================
Name: Calcula a área de um triângulo qualquer.
Description: Apresentando como conhecido a sua base e altura.
Data: 06/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>

int main(){
	float altura, base;
	while(1){
		altura = base = 0;
		printf("Calcular a área de um triângulo qualquer.\nDigite a base do triângulo:");
		scanf("%f", &base);
		printf("Digite a altura do triângulo:");
		scanf("%f", &altura);
		if(altura >= 0 && base >= 0)
			printf("Portanto, sua área é igual a %.2f.\n", (base*altura)*1/2);
		else 
			printf("A altura deve ser um número do intervalor ]0,+∞[.\n");
	}
	return 0;
}