#include <stdio.h>

int main(void) {
	int i, j, n, count = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < 4; j++) {
			count++;
			if (count % 4 == 0)
				printf("PUM\n");
			else
				printf("%d ", count);
		}
	}
	
	return 0;
}