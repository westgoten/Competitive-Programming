#include <stdio.h>
#include <math.h>

int main() {
    float x1 = 0.0f, x2 = 0.0f,
		y1 = 0.0f, y2 = 0.0f, dist = 0.0f;
		
	scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
	
	dist = pow((pow(x2-x1, 2)+pow(y2-y1, 2)), 0.5);
	
	printf("%.4f\n", dist);

    return 0;
}