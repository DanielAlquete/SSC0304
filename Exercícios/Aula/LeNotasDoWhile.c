/*
================================================================================================================================
Name: Exibe a maior e a menor nota lida.
Description: A leitura é realizada até o surgimento de um número negativo e as notas estão no intervalo de [0, 10].
Data: 01/05/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include<stdio.h>

int main(){
	unsigned int contador = 1;
	float valorlido, maiorvalor, menorvalor = 10;
	valorlido = maiorvalor = 0;
	printf("Exibe a maior e a menor nota lida.\n");
	while(valorlido >= 0){
		printf("Digite a nota número %d:", contador);
		scanf("%f",&valorlido);
		if(valorlido > 10)
			printf("Essa nota é invalida, pois não está no intervalo [0, 10].Logo, não será utilizada para comparação.\n");
		else if (valorlido < 0){
			printf("Leitura cancelada.\n");
			break;
		}
		else{
			if(valorlido > maiorvalor)
				maiorvalor = valorlido;
			if(valorlido < menorvalor)
				menorvalor = valorlido;
			contador++;
		}
	}
	if(maiorvalor != menorvalor && contador != 1)
		printf("O menor valor e o maior valor são respectivamente %.2f e %.2f.\n", menorvalor, maiorvalor);
	else if(contador == 1)
		printf("Não há notas validas.Portanto, não existe valores maiores ou menores no conjunto das notas.\n");
	else
		printf("Todas as notas são iguais.Portanto, não existe valores maiores ou menores no conjunto das notas.\n");
	return 0;
}