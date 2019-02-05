#include <stdio.h>

int main(void) {
	int m, n, aux, i, sum, done = 0;
	
	do {
		scanf("%d%d", &m, &n);
		
		if (m <= 0 || n <= 0)
			done = 1;
		else {
			if (n > m) {
				aux = m;
				m = n;
				n = aux;
			}
			
			sum = 0;
			for (i = n; i <= m; i++) {
				printf("%d ", i);
				sum += i;
			}
			
			printf("Sum=%d\n", sum);
		}
	} while (!done);
	
	return 0;
}