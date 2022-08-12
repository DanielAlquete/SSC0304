/*
================================================================================================================================
Name: Calcula a potência.
Description: Com base x e expoente y, ambos inteiros.
Data: 27/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>

int modulo(int _valor){
	return _valor > 0 ? _valor: -_valor;
}

int main(){
	int x, y;
	float resultado = 1;
	printf("Calcula a potência.\nDigite a base(x): ");
	scanf("%d", &x);
	printf("Digite o expoente(y): ");
	scanf("%d", &y);
	for(int i = 1; i <= modulo(y); i++)
		resultado *= x;
	if(y >= 0)
		printf("O resultado é %.2f.\n", resultado);
	else
		printf("O resultado é %.2f.\n", 1/resultado);
	return 0;
}