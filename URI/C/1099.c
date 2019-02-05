#include <stdio.h>

int main(void) {
	int n, x, y, aux, sum, i, j;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		sum = 0;
		scanf("%d%d", &x, &y);
		
		if (y < x) {
			aux = x;
			x = y;
			y = aux;
		}
		
		for (j = x+1; j < y; j++) {
			if (j % 2 != 0)
				sum += j;
		}
		
		printf("%d\n", sum);
	}
	
	return 0;
}