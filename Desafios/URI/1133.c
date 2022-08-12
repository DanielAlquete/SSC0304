/*
================================================================================================================================
Name: Resto da Divisão.
Data: 20/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>

int main(){
	int valor1, valor2, varaxuiliar = 0;
	scanf("%d", &valor1);
	scanf("%d", &valor2);
	if(valor1 > valor2){
		varaxuiliar = valor2;
		valor2 = valor1;
		valor1 = varaxuiliar;
	}
	valor1++;
	while(valor1 < valor2){
		if(valor1%5 == 2 || valor1%5 == 3)
			printf("%d\n", valor1);
		valor1++;
	}
	return 0;
}