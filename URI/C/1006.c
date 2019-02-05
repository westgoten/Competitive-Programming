/*Average 2*/

#include <stdio.h>

int main() {
	float a = 0.0f, b = 0.0f, c = 0.0f, average = 0.0f;
	
	scanf("%f%f%f", &a, &b, &c);
	
	average = (a*2 + b*3 + c*5) / 10.0f;
	
	printf("MEDIA = %.1f\n", average);
	
	return 0;
}