#include<stdio.h>

int main(void) {
	int n;
	int a[10];
	int b[10];
	int i, j, k,sum=0;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		scanf("%d", &b[i]);
	}
	for (i = 0; i < n; i++) {
		sum = sum + a[i] * b[i];
	}

	printf("%d", sum);

	return 0;
}