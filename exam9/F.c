#include<stdio.h>
#include<string.h>
int main(void) {
	int check[26];
	char sentence[10001];
	int i, j, k,count;

	while (fgets(sentence,BUFSIZ,stdin)!= NULL) {
		count = 0;
		for (i = 0; i < 26; i++)
			check[i] = 0;
		for (i = 0; i < strlen(sentence); i++) {
			if (65 <= sentence[i] && sentence[i] <= 90)
				check[sentence[i] - 65] = 1;
			if (97 <= sentence[i] && sentence[i] <= 122)
				check[sentence[i] - 97] = 1;
		}
			for (i = 0; i < 26; i++) {
				if (check[i] == 0) {
					printf("%c ", 65 + i);
					count = 1;
				}
			}
			if (count == 0)
				printf("OK!");
			printf("\n");
	}
	
	return 0;
}