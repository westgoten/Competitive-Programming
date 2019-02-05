#include <stdio.h>

int main(void) {
	int n, fatorial;
	
	scanf("%d", &n);
	
	fatorial = n;
	
	while (n > 1) {
		n--;
		fatorial *= n;
	}
	
	printf("%d\n", fatorial);
	
	return 0;
}