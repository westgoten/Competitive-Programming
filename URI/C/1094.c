#include <stdio.h>

int main(void) {
	int total = 0, coelhos = 0, ratos = 0, sapos = 0,
		qnt, n, i;
	char a_type = '\0';
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d %c", &qnt, &a_type);
		
		switch (a_type) {
			case 'C':
				coelhos += qnt;
				break;
			case 'R':
				ratos += qnt;
				break;
			case 'S':
				sapos += qnt;
				break;
		}
		
		total += qnt;
	}
	
	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", coelhos);
	printf("Total de ratos: %d\n", ratos);
	printf("Total de sapos: %d\n", sapos);
	printf("Percentual de coelhos: %.2f %%\n", ((float)coelhos/total) * 100);
	printf("Percentual de ratos: %.2f %%\n", ((float)ratos/total) * 100);
	printf("Percentual de sapos: %.2f %%\n", ((float)sapos/total) * 100);
	
	return 0;
}