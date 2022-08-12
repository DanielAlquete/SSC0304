#include <stdio.h>
#include <math.h>

int contarCaracteres(int _valor){
	int qtd = 0;
	do{
		_valor /= 10;
		qtd++;
	}while(_valor != 0);
	return qtd;
}

int main(){
	int n = 1, i, j, espaco;
	while (n != 0){
		scanf("%d", &n);
		if(n > 0 && n <= 15){
			int m[n][n];
			for(i = 0; i < n; i++){
				for(j = 0; j < n; j++)
					m[i][j] = pow(2, i + j);
			}
			for(i = 0; i < n; i++){
				for(j = 0; j < n; j++){
					for(espaco = contarCaracteres(pow(4, n-1)) - contarCaracteres(m[i][j]); espaco != 0; espaco--)
						printf(" ");
					if(j != n - 1)
						printf("%d ", m[i][j]);
					else
						printf("%d\n", m[i][j]);
				}
			}
			printf("\n");
		}
	}
	return 0;
}