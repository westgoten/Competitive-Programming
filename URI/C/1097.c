#include <stdio.h>

int main(void) {
	int i, j, aux = 5;
	
	for (i = 1; i < 10; i += 2) {
		aux += 2;
		for (j = aux; j > aux - 3; j--)
			printf("I=%d J=%d\n", i, j);
	}
	
	return 0;
}