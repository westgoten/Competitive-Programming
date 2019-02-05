#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, grade, i, j, min, temp, sum = 0, redo = 0, bad_g = 0, *bg_list = NULL, done = 0;
	
	scanf("%d", &n);
	bg_list = malloc(n * sizeof(int));
	
	for (i = 0; i < n; i++) {
		scanf("%d", &grade);
		
		sum += grade;
		if (grade < 5) {
			bg_list[bad_g] = grade;
			bad_g++;
		}
	}
	
	if (sum / (float)n >= 4.5f)
		printf("0");
	else {
		for (i = 0; i < bad_g-1; i++) {
			min = i;
			for (j = i+1; j < bad_g; j++)
				if (bg_list[j] < bg_list[min]) min = j;
			
			temp = bg_list[i];
			bg_list[i] = bg_list[min];
			bg_list[min] = temp;
		}
		i = 0;
		while (!done) {
			sum -= bg_list[i];
			sum += 5;
			redo++;
			
			if ((sum / (float)n) >= 4.5f)
				done = 1;
			else
				i++;
		}
		
		printf("%d", redo);
	}
	
	return 0;
}