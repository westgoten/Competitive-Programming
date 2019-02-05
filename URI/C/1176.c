#include <stdio.h>
#include <stdlib.h>

void fibonacci(unsigned long long int *fibSeq) {
	int anterior = 0, atual = 1, proximo;
	
	for (int j = 2; j < 61; j++) {
		proximo = anterior + atual;
		anterior = atual;
		atual = proximo;
		fibSeq[j] = atual;
	}
}

int main() {
	int n, pos, i;
	unsigned long long int *fibSeq;
	
	fibSeq = calloc(61, sizeof(unsigned long long int));
	
	fibonacci(fibSeq);
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &pos);
		
		printf("Fib(%d) = %llu\n", pos, fibSeq[pos]);
	}
	
	return 0;
}