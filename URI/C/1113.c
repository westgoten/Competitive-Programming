#include <stdio.h>

int main(void) {
	int x, y, different = 0;
	
	do {
		scanf("%d%d", &x, &y);
		
		if (x < y) {
			printf("Crescente\n");
			different = 1;
		} else if (x > y) {
			printf("Decrescente\n");
			different = 1;
		} else {
			different = 0;
		}
	} while (different);
	
	return 0;
}