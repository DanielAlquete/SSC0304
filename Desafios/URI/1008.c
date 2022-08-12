/*
================================================================================================================================
Name: Salário.
Data: 18/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>

int main(){
	int id, qtdhoras;
	float valorhora, salario;
	scanf("%d", &id);
	scanf("%d", &qtdhoras);
	scanf("%f", &valorhora);
	salario = valorhora*qtdhoras;
	printf("NUMBER = %d\n", id);
	printf("SALARY = U$ %.2f\n", salario);
	return 0;
}