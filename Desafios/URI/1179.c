#include <stdio.h>

int main(){
	int vi[5], vp[5], i;
	int ri = 0, rp = 0, varauxiliar;
	for(i = 0; i < 15; i++){
		scanf("%d", &varauxiliar);
		if(varauxiliar %2 == 0){
			if(rp < 5){
				vp[rp] = varauxiliar;
				rp++;
			}else{
				int j;
				for(j = 0; j < 5; j++){
					printf("par[%d] = %d\n", j, vp[j]);
					vp[j] = 0;
				}
				rp = 0;
				vp[rp] = varauxiliar;
				rp++;
			}
		}else{
			if(ri < 5){
				vi[ri] = varauxiliar;
				ri++;
			}else{
				int k;
				for(k = 0; k < 5; k++){
					printf("impar[%d] = %d\n", k, vi[k]);
					vi[k] = 0;
				}
				ri = 0;
				vi[ri] = varauxiliar;
				ri++;
			}
		}
	}
	int l;
	for(l = 0; l < ri; l++)
		printf("impar[%d] = %d\n", l, vi[l]);
	int z;
	for(z = 0; z != rp; z++)
		printf("par[%d] = %d\n", z, vp[z]);
}
