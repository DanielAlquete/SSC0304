#include <stdio.h>
#include <math.h>

int main(){
	double a, b, c, semiPerimetro, areaTriangulo, areaCirculoInscrito, areaCirculoCircunscrito;
	while (scanf("%lf %lf %lf", &a, &b, &c) != EOF){
			semiPerimetro = (a + b + c) / 2;
			areaTriangulo = sqrt(semiPerimetro * (semiPerimetro - a) * (semiPerimetro - b) * (semiPerimetro - c));
			areaCirculoCircunscrito = pow((a * b * c) / areaTriangulo, 2) * (M_PI / 16);
			areaCirculoInscrito = pow(areaTriangulo / semiPerimetro, 2) * M_PI;
			printf("%.4lf %.4lf %.4lf\n", areaCirculoCircunscrito - areaTriangulo, areaTriangulo - areaCirculoInscrito ,areaCirculoInscrito);
	}
	return 0;
}
