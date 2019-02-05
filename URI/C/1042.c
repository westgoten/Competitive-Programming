#include <stdio.h>

int main() {
	int A, B, C, vet[3], i, j, aux = 0;
	
	scanf("%d%d%d", &A, &B, &C);
	
	vet[0] = A;
	vet[1] = B;
	vet[2] = C;
	
	for (i = 0; i < 3; i++) {
		j = i + 1;
		while (j < 3) {
			if (vet[j] < vet[i]) {
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
			}
			j++;
		}
	}
	
	for (i = 0; i < 3; i++)
		printf("%d\n", vet[i]);	
	printf("\n%d\n%d\n%d\n", A, B, C);
	
	return 0;
}