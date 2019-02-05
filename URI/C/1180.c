#include <stdio.h>

int main(void) {
	int num, menor, m_pos, i, n;
	
	scanf("%d", &n);
	
	scanf("%d", &menor);
	m_pos = 0;
	
	for (i = 1; i < n; i++) {
		scanf("%d", &num);
		
		if (num < menor) {
			menor = num;
			m_pos = i;
		}
	}
	
	printf("Menor valor: %d\nPosicao: %d\n", menor, m_pos);
	
	return 0;
}