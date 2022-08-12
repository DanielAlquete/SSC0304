#include <stdio.h>

int main(){
	float m[12][12];
	int l;
	scanf("%d", &l);
	if(l >= 0 && l <= 11){
		char t;
		scanf("\n%c", &t);
		if(t == 'S' || t == 'M'){
			int i, j;
			float soma = 0;
			for(i = 0; i < 12; i++){
				for(j = 0; j < 12; j++){
					scanf("%f", &m[i][j]);
					if (i == l)
						soma += m[i][j];
				}
			}
			if(t == 'S')
				printf("%.1f\n", soma); 
			else if(t == 'M')
				printf("%.1f\n", soma/12);
		}
	}
	return 0;
}
