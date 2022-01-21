#include <stdio.h>
#include<string.h>
int max(int a, int b) {
	return a > b ? a : b;
}

int main(void) {
	char a[101], b[101],c[102];
	int t,i, j, k,m,n,count=0,len;

	scanf("%d", &t);

	for (i = 1; i <= t; i++) {
		scanf("%s %s", a, b);
		m = strlen(a);
		n = strlen(b);
		len = max(m, n)+1;
		
		for (j = 0; j <= 101; j++)
			c[j] = '0';

		for (j = 1; j <= len; j++) {
			if (j <= m)
				c[j] = c[j] + a[m - j]-'0';
			if (j <= n)
				c[j] = c[j] + b[n - j] - '0';
			if (c[j] > '9') {
				c[j + 1] = '1';
				c[j] -= 10;
			}
		}

		if (c[len] == '1') {
			for (j = len ; j >= 1; j--)
				printf("%c", c[j]);
		}
		else {
			for (j = len-1; j >= 1; j--)
				printf("%c", c[j]);
		}

		printf("\n");	
	}

	return 0;
}