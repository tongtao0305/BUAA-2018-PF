#include<stdio.h>
#include<stdlib.h>
char q[6666][6666];
int main(void) {
	int a, n;
	int i, j, k;
	int x, y, d, c;
	
	scanf("%d %d", &a, &n);
	
	for (i = 0; i < a;i++) {
		for (j = 0; j < a; j++) {
			q[i][j] = ' ';
		}
	}

	for (i = 1; i <= n; i++) {
		scanf("%d %d %d %d", &x, &y, &d, &c);
		for (j = x; j <= x + d-1; j++) {
			for (k = y; k <= y + d-1; k++) {
				q[j][k] = c+'A'-1;
			}
		}
	}
	
	for (i = 0; i < a; i++) {
		for (j = 0; j < a; j++) {
			printf("%c", q[i][j]);
		}
		printf("\n");
	}

	return 0;
}