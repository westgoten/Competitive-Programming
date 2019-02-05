/*Area of a circle*/

#include <stdio.h>

#define PI 3.14159

int main() {
	double A = 0, r = 0;
	
	scanf("%lf", &r);
	
	A = PI * r * r;
	
	printf("A=%.4f\n", A);
	
	return 0;
}