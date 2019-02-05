#include <stdio.h>

int main() {
    int delta_t = 0, velocity = 0;
	
	scanf("%d%d", &delta_t, &velocity);
	
	printf("%.3f\n", delta_t*velocity/12.0);

    return 0;
}