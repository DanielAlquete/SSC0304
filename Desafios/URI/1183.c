#include <stdio.h>

int main(){
	float m[12][12];
	char t;
	scanf("\n%c", &t);
	if(t == 'S' || t == 'M'){
		int i, j, auxliar = 0;
		float soma = 0;
		for(i = 0; i < 12; i++){
			for(j = 0; j < 12; j++){
				scanf("%f", &m[i][j]);
				if(j > auxliar)
					soma += m[i][j];
			}
		auxliar++;
		}
		if(t == 'S')
			printf("%.1f\n", soma); 
		else if(t == 'M')
			printf("%.1f\n", soma/66);
	}
	return 0;
}
