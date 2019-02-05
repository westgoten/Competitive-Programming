#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define M 1000

int main() {
	int N = 0, i, j;
	char orig_msg[M] = {0}, enc_msg[M] = {0}, c;
	long long unsigned str_len;
	
	scanf("%d", &N);
	getchar();
	
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			c = getchar();
			if (c != '\n') {
				orig_msg[j] = c;
			} else {
				break;
			}
		}
		
		str_len = strlen(orig_msg);
		for (j = 0; j < str_len; j++) {
			if (isalpha(orig_msg[j])) {
				orig_msg[j] += 3;
			}
		}
		
		for (j = 0; j < str_len; j++) {
			enc_msg[j] = orig_msg[(str_len-1)-j];
		}
		
		for (j = str_len / 2; j < str_len; j++) {
			enc_msg[j] -= 1;
		}
		
		printf("%s\n", enc_msg);
		
		str_len = (long long unsigned)str_len;
		memset(orig_msg, 0, str_len);
		memset(enc_msg, 0, str_len);
	}
	
	return 0;
}