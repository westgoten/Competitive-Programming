#include <stdio.h>
#include <string.h>

#define MAX 1000

int main() {
	int N = 0, i, j, index, number_leds,
		digit_leds[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
	char V[MAX] = {0};
	
	scanf("%d", &N);
	
	for (i = 0; i < N; i++) {
		scanf("%s", &V);
		
		number_leds = 0;
		for (j = 0; j < strlen(V); j++) {
			index = V[j]-'0';
			number_leds += digit_leds[index];
		}
		
		printf("%d leds\n", number_leds);
	}
	
	return 0;
}