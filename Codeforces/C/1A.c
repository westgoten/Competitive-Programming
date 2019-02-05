#include <stdio.h>

int main() {
	long n = 0, m = 0, a = 0;
	long long int qntdx = 0, qntdy = 0;
	
	scanf("%ld%ld%ld", &n, &m, &a);
	
	qntdx = n / a;
	qntdy = m / a;
	
	if (qntdx * a < n)
		qntdx++; 
	if (qntdy * a < m)
		qntdy++;
	
	printf("%I64d", (qntdx * qntdy));
	
	return 0;
}