/*
================================================================================================================================
Name: Calcula os divisores de um número.
Description:Sendo ele pertencente ao subconjunto dos números naturais não nulos.
Data: 27/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include<stdio.h>
int main(){
	int valor;
	printf("Calcula os divisores de um número.\nDigite o número: ");
	scanf("%d", &valor);
	if(valor > 0){
		printf("Portanto, os divisores são { ");
		for(int i = 1; i <= valor; i++){
			if(valor == i)
				printf("%d }.\n", i);
			else if(valor%i == 0)
				printf("%d, ", i);
		}
	}
	return 0;
}