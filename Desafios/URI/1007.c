/*
================================================================================================================================
Name: Diferença.
Data: 18/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>

int main(){
	int A, B, C, D, DIFERENCA;
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	scanf("%d", &D);
	DIFERENCA = (A*B) - (C*D);
	printf("DIFERENCA = %d\n", DIFERENCA);
	return 0;
}