/*
================================================================================================================================
Name: Médias Ponderadas.
Data: 20/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>

int main(){
	int casos, i = 0;
	float valor1, valor2, valor3;
	scanf("%d", &casos);
	while(i < casos){
		scanf("%f %f %f", &valor1, &valor2, &valor3);
		printf("%.1f\n", (2*valor1 + 3*valor2 + 5*valor3)/10);
		valor1 = valor2 = valor3 = 0;
		i++;
	}
}