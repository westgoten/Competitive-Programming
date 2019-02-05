#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char *s = NULL, let, *found = NULL, *new_s = NULL;
	int n, k, i, len;
	
	scanf("%d%d", &n, &k);
	
	s = malloc((n+1) * sizeof(char));
	s[n] = 0;
	
	scanf("%s", s);
	
	for (i = 0; i < k; i++) {
		for (let = 97; let < 123; let++) {
			found = strchr(s, let);
			if (found) {
				len = strlen(found);
				found[0] = 0;
				
				if (n > 1) {
					new_s = calloc(n, sizeof(char));
					strncpy(new_s, s, n-len);
				
					if (len > 1) {
						found = &(found[1]);
						strcat(new_s, found);
					}
				
					free(s);
				
					s = new_s;
				}
				
				n--;
				
				break;
			}
		}
	}
	
	printf("%s", s);
	
	return 0;
}