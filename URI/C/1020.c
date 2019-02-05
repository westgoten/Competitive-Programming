#include <stdio.h>

int main() {
	int years = 0, months = 0, days = 0;
	
	scanf("%d", &days);
	
	years = days / 365;
	days = days % 365;
	months = days / 30;
	days = days % 30;
	
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);
	
	return 0;
}