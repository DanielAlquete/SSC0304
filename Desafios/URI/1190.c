#include <stdio.h>

int main(){
	float m[12][12];
	char t;
	scanf("\n%c", &t);
	if(t == 'S' || t == 'M'){
		int i, j, a = 11;
		float soma = 0;
		for(i = 0; i < 6; i++){
			for(j = 0; j < 12; j++){
				scanf("%f", &m[i][j]);
				if(j > a)
					soma += m[i][j];
			}
			a--;
		}
		a++;
		for(i = 6; i < 12; i++){
			for(j = 0; j < 12; j++){
				scanf("%f", &m[i][j]);
				if(j > a)
					soma += m[i][j];
			}
			a++;
		}
		if(t == 'S')
			printf("%.1f\n", soma); 
		else if(t == 'M')
			printf("%.1f\n", soma/30);
	}
	return 0;
}
