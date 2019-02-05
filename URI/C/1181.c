#include <stdio.h>

int main(void) {
	int line, i, lpos, upos;
	float num, sum = 0;
	char op;
	
	scanf("%d %c", &line, &op);
	
	lpos = line*12;
	upos = lpos + 11;
	
	for (i = 0; i < 144; i++) {
		scanf("%f", &num);
		
		if (i >= lpos && i <= upos)
			sum += num;
		else if (i > upos)
			break;
	}
	
	if (op == 'S')
		printf("%.1f\n", sum);
	else
		printf("%.1f\n", sum / 12);
}