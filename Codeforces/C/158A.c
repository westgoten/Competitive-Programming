/*Next Round*/

#include <stdio.h>

int main() {
	int n = 0, k = 0, k_score = 0,
		a = 0, next_r = 0, i;
	
	scanf("%d%d", &n, &k);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		
		if (a == 0)
			break;
		
		if (i+1 == k) {
			k_score = a;
			next_r++;
		} else if (i+1 < k) {
			next_r++;
		} else if (a >= k_score) {
			next_r++;
		}
	}
	
	printf("%d", next_r);
	
	return 0;
}