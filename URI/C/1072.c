#include <stdio.h>

int main(void) {
	int in = 0, out = 0, n, i, num;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &num);
		
		if (num >= 10 && num <= 20)
			in++;
		else
			out++;
	}
	
	printf("%d in\n%d out\n", in, out);
	
	return 0;
}