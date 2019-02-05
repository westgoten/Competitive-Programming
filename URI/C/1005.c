/*Average 1*/

#include <stdio.h>

int main() {
	float a = 0.0f, b = 0.0f, average = 0.0f;
	
	scanf("%f%f", &a, &b);
	
	average = (a*3.5 + b*7.5) / 11.0f;
	
	printf("MEDIA = %.5f\n", average);
	
	return 0;
}