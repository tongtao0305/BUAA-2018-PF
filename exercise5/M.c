#include <stdio.h>
#include<string.h>

int max(int a, int b) {
	return a > b ? a : b;
}

int main(void) {
	char a[101], b[101],c[101],d[101],e[101];
	int t;
	int i, j, k;
	
	scanf("%d", &t);
	
	for (i = 1; i <= t; i++) {

		for (j = 0; j <= 100; j++) {
			a[j] = ' ';
			b[j] = ' ';
			c[j] = ' ';
			d[j] = ' ';
			e[j] = ' ';
		}
		scanf("%s %s", a, b);
		
		for (k = 0; k < strlen(a);k++) {
			d[k] = a[strlen(a) - k-1];
		}
		for (k = strlen(a) + 1; k <= 100; k++) {
			d[k] = ' ';
		}
		
		for (k = 0; k < strlen(b);k++) {
			e[k] = b[strlen(b) - k - 1];
		}
		for (k = strlen(b) + 1; k <= 100; k++) {
			e[k] = ' ';
		}
		
		for (j = 0; j < 101; j++) {

			if ('0' <= d[j] && d[j] <= '9') {
				if (c[j] == ' ')
					c[j] = '0';
				c[j] = c[j] + d[j] - '0';
			}
			if ('0' <= e[j] && e[j] <= '9') {
				if (c[j] == ' ')
					c[j] = '0';
				c[j] = c[j] + e[j]-'0';
			}

			if (c[j] > '9') {
				if (c[j + 1] == ' ')
					c[j + 1] = '0';
				c[j] = c[j] - 10;
				c[j + 1]++;
			}
		}

		for (i = 0; i <= 100; i++) {
			if (c[i] == ' ') {
				i = i - 1;
				break;
			}
		}

		/*
		if (d[0] + e[0] - '0' - '0' > 9)
			i = max(strlen(a), strlen(b)) + 1;
		else
			i = max(strlen(a), strlen(b));
			*/
		while (i--) {
			printf("%c", c[i]);
		}
		printf("\n");
	}
	
	return 0;
}