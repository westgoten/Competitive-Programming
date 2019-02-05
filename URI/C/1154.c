#include <stdio.h>

int main(void) {
	int age, count = 0, valid = 1;
	float sum = 0;
	
	while (valid) {
		scanf("%d", &age);
		if (age > 0) {
			count++;
			sum += age;
		} else
			valid = 0;
	}
	
	printf("%.2f\n", sum / count);
	
	return 0;
}