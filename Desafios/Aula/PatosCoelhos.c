/*
================================================================================================================================
Name: Calcula a quantidade de patos e coelhos de um cercado.
Description: A partir do total de cabeças, de patas e de um sistema 2x2 linear.
Data: 15/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>

int main(){
	int cabecas, patas;
	while(1){
		cabecas = patas = 0;
		printf("Calcula a quantidade de patos e coelhos de um cercado.\nDigite o total de cabeças:");
		scanf("%d", &cabecas);
		printf("Digite o total de patas:");
		scanf("%d", &patas);
		if(patas%2 == 0 && 2*cabecas <= patas && patas <= 4*cabecas)
			printf("Portanto, a quantidade de patos é %d e a quantidade de coelhos é %d.\n", 2*cabecas - patas/2, patas/2 - cabecas);
		else
			printf("Esse valores não representam uma solução.\n");
	}
	return 0;
}