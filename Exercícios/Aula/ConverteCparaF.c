/*
================================================================================================================================
Name: Converte temperaturas de graus Celsius para Fahrenheit.
Description: Com uso da equação Tf = 1.8*Tc + 32.
Data: 17/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>

int main(){
	float temperatura;
	while(1){
		temperatura = 0;
		printf("Converte temperaturas de graus Celsius para Fahrenheit.\nDigite a temperaturas em °C:");
		scanf("%f", &temperatura);
		printf("Portanto, a temperatura em Fahrenheit é %.2f°F.\n", 1.8*temperatura + 32);
	}
	return 0;
}