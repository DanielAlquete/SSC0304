/*
================================================================================================================================
Name: Crescente e Decrescente.
Data: 27/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include<stdio.h>

int main(){
	int X, Y;
	while(X != Y){
		scanf("%d %d", &X, &Y);
		if (X > Y)
			printf("Decrescente\n");
		if(X < Y)
			printf("Crescente\n");
	}
	return 0;
}