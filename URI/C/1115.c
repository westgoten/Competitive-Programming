#include <stdio.h>

int main(void) {
	int x, y, done = 0;
	
	while (!done) {
		scanf("%d%d", &x, &y);
		
		if (x == 0 || y == 0)
			done = 1;
		else if (x > 0 && y > 0)
			printf("primeiro\n");
		else if (x < 0 && y > 0)
			printf("segundo\n");
		else if (x < 0 && y < 0)
			printf("terceiro\n");
		else
			printf("quarto\n");
	}
	
	return 0;
}