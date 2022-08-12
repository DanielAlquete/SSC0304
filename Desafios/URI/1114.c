/*
================================================================================================================================
Name: Senha Fixa.
Data: 27/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include<stdio.h>

int main(){
	int senha;
	while(senha != 2002){
		scanf("%d", &senha);
		if(senha == 2002)
			printf("Acesso Permitido\n");
		else
			printf("Senha Invalida\n");
	}
	return 0;
}