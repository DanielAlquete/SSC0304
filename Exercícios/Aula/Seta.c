/*
================================================================================================================================
Name: Desenha uma seta feita de "*".
Description: A partir de seu comprimento.
Data: 27/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>

int main(){
	int qtd;
	printf("Desenha uma seta.\nDigite o comprimento da seta:");
	scanf("%d", &qtd);
	for(int i = 0; i < qtd; i++)
		printf("*");
	printf("\n");
	return 0;
}