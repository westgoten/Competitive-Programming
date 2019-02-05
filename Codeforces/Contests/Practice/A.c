#include <stdio.h>

int main(void) {
	int A, B, C, N, F;
	
	scanf("%d%d%d%d", &A, &B, &C, &N);
	
	A -= C;
	B -= C;
	F = N - A + B + C;
	
	if (F >= 1)
		printf("%d", F);
	else
		printf("-1");
	
	return 0;
}