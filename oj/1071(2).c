#include<stdio.h>
#include<string.h>
int main(void) {
	int len, i;
	char s[100];
	char *b, *u, *g;

	fgets(s, BUFSIZ, stdin);
	len = strlen(s);

	while (1) {
		g = strrchr(s, 'g');

		u = g;
		if (u == NULL)
			break;

		while (*u != 'u') {
			if (u == &s[0]) {
				u = NULL;
				break;
			}
			u--;
		}
		
		b = u;
		if (b == NULL)
			break;

		while (*b != 'b') {
			if (b == &s[0]) {
				b = NULL;
				break;
			}
			b--;
		}

		if (b == NULL || u == NULL || g == NULL) {
			break;
		}
		else {
			*b = '0';
			*u = '0';
			*g = '0';
		}
	}

	for (i = 0; i < len; i++) {
		if (s[i] != '0')
			putchar(s[i]);
	}

	return 0;
}