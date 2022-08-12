#include <stdio.h>
#include <math.h>

int contarCaracteres(unsigned long long int _valor){
	int qtd = 0;
	do{
		_valor /= 10;
		qtd++;
	}while(_valor != 0);
	return qtd;
}

int main(){
	int c, i, j, m, n, espaco;
	scanf("%d", &n);
	for(c = 4; c < n + 4; c++ ){
		scanf("%d", &m);
		unsigned long long int v[m][m], maior[m], varauxilar;
		for(i = 0; i < m; i++){
			for(j = 0; j < m; j++){
				scanf("%llu", &varauxilar);
				v[i][j] = pow(varauxilar, 2);
			}
		}
		for(j = 0; j < m; j++){
			for(i = 0; i < m; i++){
				if(i == 0)
					maior[j] = v[i][j];
				else{
					if(v[i][j] > maior[j])
						maior[j] = v[i][j];
				}
			}
		}
		printf("Quadrado da matriz #%d:\n", c);
		for(i = 0; i < m; i++){
			for(j = 0; j < m; j++){
				for(espaco = contarCaracteres(maior[j]) - contarCaracteres(v[i][j]); espaco != 0; espaco--)
					printf(" ");
				if(j != m - 1)
					printf("%llu ", v[i][j]);
				else
					printf("%llu\n", v[i][j]);
			}
		}
		if(c != n +3)
			printf("\n");
	}
	return 0;
}