/*Way Too Long Words*/

#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
	int n = 0, i;
	char word[MAX] = {0};
	long long unsigned str_len = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%s", &word);
		
		str_len = strlen(word);
		if (str_len > 10) {
			printf("%c%I64u%c\n", word[0], str_len-2, word[str_len-1]);
		} else {
			printf("%s\n", word);
		}
		
		memset(&word, 0, str_len);
	}
	
	return 0;
}