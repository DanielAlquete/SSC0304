#include <stdio.h>
#include <math.h>

int main(){
	unsigned int t, n, i, j, qtd, esfera;
	scanf("%u", &t);
	for(i = 0; i < t; i++){
		scanf("%u", &n);
		unsigned int v[n + 1];
		qtd = 0;
		esfera = 1;
		for(j = 1; j <= n; j++)
			v[j] = 0;
		for(j = 1; j <= n; j++){
			if(v[j] == 0 || (float) sqrt(v[j] + esfera) == (int) sqrt(v[j] + esfera) ){
				v[j] = esfera;
				esfera++;
            	qtd++;
            	j = 0;
            }
        }
        printf("%d\n", qtd);
    }
    return 0;
}
