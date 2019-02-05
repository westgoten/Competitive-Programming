#include <stdio.h>

int main() {
    int dist = 0;
    float fuel = 0.0f;

    scanf("%d%f", &dist, &fuel);

    printf("%.3f km/l\n", dist/fuel);

    return 0;
}
