#include <stdio.h>

int main(void) {
	int n, ant = 0, atual = 1, prox, i;
	
	scanf("%d", &n);
	
	if (n == 1)
		printf("%d", ant);
	else if (n == 2)
		printf("%d %d", ant, atual);
	else if (n > 2) {
		printf("%d %d", ant, atual);
		
		for (i = 2; i < n; i++) {
			prox = ant + atual;
			ant = atual;
			atual = prox;
			
			printf(" %d", atual);
		}
		
		printf("\n");
	}
	
	return 0;
}