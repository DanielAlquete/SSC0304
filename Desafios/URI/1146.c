/*
================================================================================================================================
Name: Sequências Crescentes.
Data: 27/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>

int main(){
	int X;
	while(X != 0){
		scanf("%d", &X);
		int i;
		for(i = 1; i <= X; i++){
			if(i == X)
				printf("%d\n", i);
			else
				printf("%d ", i);
		}
	}
	return 0;
}