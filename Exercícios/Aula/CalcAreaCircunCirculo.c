/*
================================================================================================================================
Name: Calcula a área do circulo e a circunferência que o delimita.
Description:A partir do raio fornecido.
Data: 10/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(){
	float raio;
	while(1){
		raio = 0;
		printf("Calcula a área do circulo e a circunferência que o delimita.\nDigite o raio do circulo:");
		scanf("%f", &raio);
		if(raio > 0)
			printf("Portanto, a área do circulo é %.2f e a circunferência é %.2f.\n", PI*pow(raio, 2), 2*PI*raio);
		else
			printf("O raio deve ser estar no intervalo de ]0,∞+[.\n");
	}
	return 0;
}