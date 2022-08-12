/*
================================================================================================================================
Name: Inverte os valores de duas variáveis inteiras.
Description: Com o auxilio de uma variável auxiliar.
Data: 13/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/

#include <stdio.h>

int main(){
	int valor1, valor2, varswitch;
	while(1){
		valor1 = valor2 = varswitch = 0;
		printf("Inverte os valores de duas variáveis inteiras.\nEscreva o primeiro valor inteiro:");
		scanf("%d", &valor1);
		printf("Escreva o segundo valor inteiro:");
		scanf("%d", &valor2);
		printf("Os valores digitados são %d e %d e estão ,respectivamente, nas variáveis valor1 e valor2.\n", valor1, valor2);
		varswitch = valor2;
		valor2 = valor1;
		valor1 = varswitch;
		printf("Os valores digitados são %d e %d e estão ,respectivamente, nas variáveis valor1 e valor2.\n", valor1, valor2);
	}
	return 0;
}