/*
================================================================================================================================
Name: Feliz Nataaal!.
Data: 27/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>
#include <math.h>

int main(){
	int i, j;
	scanf("%d", &i);
	if(i > 1 && i <= pow(10, 4)){
		printf("Feliz nat");
		for(j = 0; j < i; j++)
			printf("a");
		printf("l!\n");
	}
	return 0;
}