/*
================================================================================================================================
Name: Calcula o salário líquido do encanador.
Description: A partir da diária do trabalhador e de um suposto IRPF.
Data: 10/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>
#define VALOR_DIARIA 20
#define VALOR_LIQUIDO 0.92

int main(){
	int diasTrabalhados;
	while(1){
		diasTrabalhados = 0;
		printf("Calcular o salário líquido do encanador.\nDigite a quantidade de dias trabalhados:");
		scanf("%d", &diasTrabalhados);
		if(diasTrabalhados > 0)
			printf("Portanto, o valor total líquido é de %.2f reais.\n", VALOR_DIARIA * diasTrabalhados * VALOR_LIQUIDO);
		else
			printf("A quantidade de dias deve ser estar no intervalo de ]0,∞+[.\n");
	}
	return 0;
}