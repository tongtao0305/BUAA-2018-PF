#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char c[1001][21] = {'0'};

int main(void) {
	int n;
	int i, j, k;
	scanf("%d", &n);
	//getchar();
	for (i = 1; i <= n; i++) {
		scanf("%s", c[i]);
	}

	for (i = 1; i <= n; i++) {
		for (j = n; j > i; j--) {
			if (strcmp(c[j-1], c[j]) > 0) {
				strcpy(c[0], c[j-1]);
				strcpy(c[j-1], c[j]);
				strcpy(c[j], c[0]);
			}
		}
	}

	for (i = 1; i <= n; i++)
		puts(c[i]);

	return 0;
}