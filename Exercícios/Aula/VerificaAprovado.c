/*
================================================================================================================================
Name: Verifica se o aluno foi aprovado na matéria.
Description: Por meio de sua media, caso seja maior ou igual a 5.
Data: 17/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>

int main(){
	float nota1, nota2, nota3, media;
	while(1){
		nota1 = nota2 = nota3 = media = 0;
		printf("Verifica se o aluno foi aprovado na matéria.\nDigite a primeira nota:");
		scanf("%f", &nota1);
		printf("Digite a segunda nota:");
		scanf("%f", &nota2);
		printf("Digite a terceira nota:");
		scanf("%f", &nota3);
		if(nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10 && nota3 >= 0 && nota3 <= 10){
			media = (nota1 + nota2 + nota3)/3;
			printf("A media do aluno foi %.2f.\n", media);
			if(media >= 5)
				printf("Portanto, ele foi aprovado na matéria.\n");
			else
				printf("Portanto, ele não foi aprovado na matéria.\n");
		}
		else
			printf("As notas devem estar no intervalo de [0,10].\n");
	}
	return 0;
}