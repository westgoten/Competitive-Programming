#include <stdio.h>

int main(void) {
	int t, i, j = 0;
	
	scanf("%d", &t);
	
	for (i = 0; i < 1000; i++) {
		if (j >= t)
			j = 0;
		
		printf("N[%d] = %d\n", i, j);
		
		if (j < t)
			j++;
	}
	
	return 0;
}