/*
================================================================================================================================
Name: Par ou Ímpar.
Data: 27/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>
#include <math.h>

int main(){
	int N;
	scanf("%d", &N);
	if(N < 10000){
		int i;
		int valor;
		for(i = 0; i < N; i++){
			scanf("%d", &valor);
			if(valor == 0)
				printf("NULL\n");
			else if(valor > -pow(10, 7) && valor < pow(10, 7)){
				if(valor%2 == 0)
					printf("EVEN ");
				else
					printf("ODD ");
				if(valor > 0)
					printf("POSITIVE\n");
				else
					printf("NEGATIVE\n");
			}
		}
	}
	return 0;
}