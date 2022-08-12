#include <stdio.h>
#define FALSE 0
#define TRUE 1

int main(){
	unsigned int i, j, n, m, validacao = TRUE, zeros = 0, elemento;
	scanf("%u %u", &n, &m);
	unsigned int v[n][m];
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++)
			scanf("%u", &v[i][j]);
	}
	for(i = 0; i < n; i++){
		if(zeros != m)
			zeros = 0;
		for(j = 0; j < m; j++){
			if(zeros != m){
				if(i == 0){
					if(v[i][j] != 0){
						elemento = j;
						break;
					}else
						zeros++;
				}else if(i != 0){
					if(j <= elemento && v[i][j] != 0){
						validacao = FALSE;
						break;
					}else if(j > elemento && v[i][j] != 0){
						elemento = j;
						break;
					}else
						zeros++;
				}
			}else{
				if(v[i][j] != 0){
					validacao = FALSE;
					break;
				}
			}
		}
	}
	if(validacao)
		printf("S\n");
	else
		printf("N\n");
	return 0;
}