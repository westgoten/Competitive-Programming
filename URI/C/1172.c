#include <stdio.h>

int main() {
	int num, i;
	
	for (i = 0; i < 10; i++) {
		scanf("%d", &num);
		
		if (num <= 0)
			printf("X[%d] = 1\n", i);
		else
			printf("X[%d] = %d\n", i, num);
	}
	
	return 0;
}