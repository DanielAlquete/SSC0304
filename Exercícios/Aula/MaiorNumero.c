/*
================================================================================================================================
Name: Descobre qual é o maior número de três números digitados.
Description: Sendo eles pertencentes ao subconjunto dos números inteiros.
Data: 20/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>

int main(){
	int numero1, numero2, numero3;
	while(1){
		numero1 = numero2 = numero3 = 0;
		printf("Descobre qual é o maior número de três números digitados.\nDigite o primeiro número:");
		scanf("%d", &numero1);
		printf("Digite o segundo número:");
		scanf("%d", &numero2);
		printf("Digite o terceiro número:");
		scanf("%d", &numero3);
		if(numero1 == numero2 && numero2 == numero3)
			printf("Não há número maior, pois todos são iguais.\n");
		else if(numero1 >= numero2 && numero1 >= numero3)
			printf("O maior número é %d.\n", numero1);
		else if (numero2 >= numero3)
			printf("O maior número é %d.\n", numero2);
		else
			printf("O maior número é %d.\n", numero3);
	}
	return 0;
}