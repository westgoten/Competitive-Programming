#include <stdio.h>

int main(void) {
	double vec[100] = {}, num;
	int i;
	
	scanf("%lf", &vec[0]);
	
	for (i = 1; i < 100; i++) {
		vec[i] = vec[i-1] / 2;
	}
	
	for (i = 0; i < 100; i++)
		printf("N[%d] = %.4f\n", i, vec[i]);
	
	return 0;
}