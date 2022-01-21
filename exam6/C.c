#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int t,n,m;
	int a[101],b[101];
	int i, j, k, count;
	long long int sum;

	scanf("%d", &t);

	for (k = 1; k <= t; k++) {
		scanf("%d %d", &n, &m);

		for (i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		for (i = 0; i < m; i++) {
			scanf("%d", &b[i]);
		}

		for (i = 0; i < n + m - 1; i++) {
			sum = 0;

			for (j = i; j >= 0; j--) {
				if (j < n && (i - j) < m)
					sum = sum + (long long int)a[j] * b[i - j];
			}

			printf("%lld ", sum);
		}
		printf("\n");
	}

	return 0;
}