/*
================================================================================================================================
Name: Números Pares.
Data: 20/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>

int main(){
	int i;
	for(i = 1; i <= 100; i++){
		if(i%2 == 0)
			printf("%d\n", i);
	}
	return 0;
}