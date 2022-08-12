/*
================================================================================================================================
Name: Calcula o peso ideal.
Description: De ambos os sexos.
Data: 27/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>

int main(){
	int escolha;
	float altura;
	printf("Calcula o peso ideal.\nDigite 1 para o sexo masculino e digite 2 para o sexo feminino:");
	scanf("%d", &escolha);
	printf("Digite a altura: ");
	scanf("%f", &altura);
	if(escolha == 1 && altura > 0)
		printf("O peso ideal é %.2f kg.\n", (72.7 * altura) - 58);
	else if(escolha == 2 && altura > 0)
		printf("O peso ideal é %.2f kg.\n", (62.1 * altura) - 44.7);
	else
		printf("Digite a opção e altura corretamente.\n");
	return 0;
}