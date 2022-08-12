/*
================================================================================================================================
Name: Resolve equações polinomiais do segundo grau com domínio de subconjunto dos reais.
Description: Utiliza a equação de bhaskara.
Data: 17/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c, delta;
	while(1){
		a = b = c = delta = 0;
		printf("Resolve equações polinomiais do segundo grau(ax^2 + bx + c = 0) com domínio de subconjunto dos reais.\nDigite o coeficiente dominante(a):");
		scanf("%f", &a);
		printf("Digite o coeficiente a1(b):");
		scanf("%f", &b);
		printf("Digite o coeficiente independente(c):");
		scanf("%f", &c);
		if(a != 0){
			delta = pow(b,2) - (4*a*c);
			if(delta > 0)
				printf("As raizes são %.2f e %.2f.\n", (-b + sqrt(delta))/(2*a),  (-b - sqrt(delta))/(2*a));
			else if (delta == 0)
				printf("A raiz de multiplicidade 2 é %2.f.\n", (-b + sqrt(delta))/(2*a));
			else
				printf("Não exite solução no conjunto dos reais.\n");
		}else
			printf("O coeficiente dominante deve ser diferente de 0.\n");
	}
	return 0;
}