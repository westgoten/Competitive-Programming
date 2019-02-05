#include <stdio.h>

int main() {
	double A, B, C, aux;
	
	scanf("%lf%lf%lf", &A, &B, &C);
	
	if (B >= A && B >= C) {
		aux = A;
		A = B;
		B = aux;
	} else if (C >= A && C >= B) {
		aux = A;
		A = C;
		C = aux;
	}
	
	if (A >= B + C)
		printf("NAO FORMA TRIANGULO\n");
	else {
		if (A*A == B*B + C*C)
			printf("TRIANGULO RETANGULO\n");
		else if (A*A > B*B + C*C)
			printf("TRIANGULO OBTUSANGULO\n");
		else	
			printf("TRIANGULO ACUTANGULO\n");
		
		if (A == B && B == C)
			printf("TRIANGULO EQUILATERO\n");
		else if (A == B || A == C || B == C)
			printf("TRIANGULO ISOSCELES\n");
	}
	
	return 0;
}