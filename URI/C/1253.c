#include <stdio.h>
#include <string.h>

#define MAX 50

int main() {
	int N = 0, rshift = 0, i, j;
	char enc_text[MAX] = {0}, dec_char = 0,
		dec_text[MAX] = {0};
	unsigned text_len = 0;
	
	scanf("%d", &N);
	
	for (i = 0; i < N; i++) {
		scanf("%s", &enc_text);
		scanf("%d", &rshift);
		
		text_len = strlen(enc_text);
		
		for (j = 0; j < text_len; j++) {
			dec_char = enc_text[j] - rshift;
			if (dec_char < 65) {
				dec_char += 26;
			} else if (dec_char > 90) {
				dec_char -= 26;
			}
			dec_text[j] = dec_char;
		}
		
		printf("%s\n", dec_text);
		
		memset(enc_text, 0, text_len);
		memset(dec_text, 0, text_len);
	}
	
	return 0;
}