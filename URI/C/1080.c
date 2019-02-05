#include <stdio.h>

int main(void) {
	int num, h_num = 0, pos, i;
	
	for (i = 0; i < 100; i++) {
		scanf("%d", &num);
		
		if (num > h_num) {
			h_num = num;
			pos = i + 1;
		}
	}
	
	printf("%d\n%d\n", h_num, pos);
	
	return 0;
}