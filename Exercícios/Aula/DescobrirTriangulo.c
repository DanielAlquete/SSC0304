/*
================================================================================================================================
Name: Descobre quais são as classificações de um triângulo qualquer.
Description: A partir das medidas dos lados e pela lei dos cossenos.
Data: 17/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>
#include <math.h>

float modulo(float _valor){
	return _valor > 0 ? _valor: -_valor;
}

int main(){
	float ab, bc, ca, cosA, cosB, cosC;
	while(1){
		ab = bc = ca = cosA = cosB = cosC = 0;
		printf("Descobre quais são as classificações de um triângulo qualquer.\nSuponha um triângulo qualquer de vertices A,B e C.\nDigite o valor do segmento AB:");
		scanf("%f", &ab);
		printf("Digite o valor do segmento BC:");
		scanf("%f", &bc);
		printf("Digite o valor do segmento CA:");
		scanf("%f", &ca);
		if(ab > 0 && ab > 0 && ca > 0){
			if(modulo(bc - ca) < ab && ab < (bc + ca) && modulo(ab - ca) < bc && bc < (ab + ca) && modulo(ab - bc) < ca && ca < (ab + bc)){
				if(ab == bc && bc == ca)
					printf("O triângulo é equilatero.\n");
				else if(ab == bc || bc == ca || ab == ca)
					printf("O triângulo é isosceles.\n");
				else
					printf("O triângulo é escaleno.\n");
				cosA = (-bc*bc + pow(ab, 2) + pow(ca, 2)) / (2*ab*ca);
				cosB = (-ca*ca + pow(ab, 2) + pow(bc, 2)) / (2*ab*bc);
				cosC = (-ab*ab + pow(bc, 2) + pow(ca, 2)) / (2*bc*ca);
				if(cosA == 0 || cosB == 0 || cosC == 0)
					printf("O triângulo é retângulo.\n");
				else if(cosA < 0 || cosB < 0 || cosC < 0)
					printf("O triângulo é obtusângulo.\n");
				else
					printf("O triângulo é acutângulo.\n");
			}else
				printf("Esse segmentos não seguem a condição de existência, portanto isso não é um triângulo.\n");	
		}else
			printf("As medidas dos segmentos devem estar no intervalo de ]0,∞+[.");
	}
	return 0;
}