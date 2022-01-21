#include<stdio.h>

int main(void) {
	int n;
	int a[11];
	int b[11];
	int i, j, k;
	int result=0;

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 1; i <= n; i++) {
		scanf("%d", &b[i]);
	}
	for (i = 1; i <= n; i++) {
		result += a[i] * b[i];
	}

	printf("%d", result);
	return 0;
}