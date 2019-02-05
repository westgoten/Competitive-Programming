#include <stdio.h>

int main(void) {
	float num;
	int i;
	
	for (i = 0; i < 100; i++) {
		scanf("%f", &num);
		
		if (num <= 10)
			printf("A[%d] = %.1f\n", i, num);
	}
	
	return 0;
}