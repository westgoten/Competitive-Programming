#include <stdio.h>

int main(void) {
	float num, sum = 0;
	int valid, i;
	
	for (i = 0; i < 2; i++) {
		valid = 0;
		while (!valid) {
			scanf("%f", &num);
			
			if (num >= 0.0f && num <= 10.0f) {
				sum += num;
				valid = 1;
			} else
				printf("nota invalida\n");
		}
	}
	
	printf("media = %.2f\n", (sum / 2));
	
	return 0;
}