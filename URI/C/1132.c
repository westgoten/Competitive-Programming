#include <stdio.h>

int main(void) {
	int x, y, aux, sum = 0, i;
	
	scanf("%d%d", &x, &y);
	
	if (x > y) {
		aux = x;
		x = y;
		y = aux;
	}
	
	for (i = x; i < y+1; i++) {
		if (i % 13 != 0)
			sum += i;
	}
	
	printf("%d\n", sum);
	
	return 0;
}