/*
================================================================================================================================
Name: PUM.
Data: 27/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include <stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	if(n > 0){
		for(i = 0; i < n; i++)
			printf("%d %d %d PUM\n", 4*i +1, 4*i + 2, 4*i + 3);
	}
	return 0;
}