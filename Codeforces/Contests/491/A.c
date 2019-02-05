#include <stdio.h>

int main(void) {
	int A, B, C, N, F;
	
	scanf("%d%d%d%d", &A, &B, &C, &N);
	
	A = A - C;
	B = B - C;
	if (A >= 0 && B >= 0)
		F = N - (A + B + C);
	else
		F = -1;
	
	if (F >= 1)
		printf("%d", F);
	else
		printf("-1");
	
	return 0;
}