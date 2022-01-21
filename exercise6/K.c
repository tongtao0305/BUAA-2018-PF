#include<stdio.h>

int main(void) {
	int n, a, b;
	int i, j, k;
	char c[200000];
	
	scanf("%d %d %d", &n, &a, &b);
	scanf("%s", c);
	
	for (i = 0; i < n; i++) {
		if (c[i] == 'E') {
			a = a + 100;
			b = b + 100;
		}
		else {
			if (a < 1900)
				a = a + 71;
			else
				a = a - 38;
			if (b < 1900)
				b = b + 107;
			else
				b = b - 74;
		}
	}
	
	if (a > b)
		printf("MaxWin");
	else if (a < b)
		printf("KangWin");
	else
		printf("WellWell");
	
	return 0;
}