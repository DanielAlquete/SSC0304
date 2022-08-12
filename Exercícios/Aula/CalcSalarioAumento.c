/*
================================================================================================================================
Name: Calcula o novo salário dos funcionários de uma empresa.
Description: Até 500 reais o aumento será de 20%, já o restante que ganha acima disso, receberá um aumento de 10%.
Data: 17/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>

int main(){
	float salario;
	while(1){
		salario = 0;
		printf("Calcula o novo salário dos funcionários de uma empresa.\nEntre com o salário do funcionários selecionado:");
		scanf("%f", &salario);
		if(salario > 0 && salario <= 500)
			printf("O novo salario do funcionário é %2.f reais.\n", 1.2*salario);
		else if (salario > 500)
			printf("O novo salario do funcionário é %2.f reais.\n", 1.1*salario);
		else
			printf("O salario antigo deve estar no intervalo de ]0,∞+[.\n");
	}
	return 0;
}