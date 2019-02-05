#include <stdio.h>

#define SIZE 20

int main() {
	int vec[SIZE] = {}, i, aux;
	
	for (i = 0; i < 20; i++)
		scanf("%d", &vec[i]);
	
	for (i = 0; i < SIZE/2; i++) {
		aux = vec[i];
		vec[i] = vec[(SIZE-1) - i];
		vec[(SIZE-1) - i] = aux;
	}
	
	for (i = 0; i < SIZE; i++)
		printf("N[%d] = %d\n", i, vec[i]);
	
	return 0;
}