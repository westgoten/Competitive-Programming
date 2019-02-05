#include <stdio.h>
#include <string.h>

#define MAX 15

int main() {
    int i;
    char word1[MAX] = {}, word2[MAX] = {}, word3[MAX] = {},
         animal[][MAX] = {"aguia", "pomba", "homem",
						"vaca", "pulga", "lagarta",
						"sanguessuga", "minhoca"},
		 category[][3][MAX] = {{"vertebrado", "ave", "carnivoro"},
							{"vertebrado", "ave", "onivoro"},
							{"vertebrado", "mamifero", "onivoro"},
							{"vertebrado", "mamifero", "herbivoro"},
							{"invertebrado", "inseto", "hematofago"},
							{"invertebrado", "inseto", "herbivoro"},
							{"invertebrado", "anelideo", "hematofago"},
							{"invertebrado", "anelideo", "onivoro"}};
	
	scanf("%s%s%s", word1, word2, word3);
	
	for (i = 0; i < 8; i++) {
		if (!strcmp(word1, category[i][0]) && !strcmp(word2, category[i][1]) && !strcmp(word3, category[i][2])) {
			printf("%s\n", animal[i]);
			break;
		}
	}
	
	return 0;    
}