#include <stdio.h>

int main(void) {
	int n, number, i;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		int ehprimo = 1;
		scanf("%d", &number);
		
		for (int j = 2; j <= number / 2; j++) {
			if (number % j == 0) {
				ehprimo = 0;
				break;
			}
		}
		
		if (ehprimo)
			printf("%d eh primo\n", number);
		else
			printf("%d nao eh primo\n", number);
	}
	
	return 0;
}