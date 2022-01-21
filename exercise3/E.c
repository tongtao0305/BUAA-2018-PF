#include<stdio.h>
int a[1001][1001];

int main(void) {
	int n,i,j,k;

	
	for (i = 1; i <= 1000; i++) {
		a[i][1] = 1;
		a[i][i] = 1;//³õÊ¼»¯
	}

	for (i = 3; i <= 1000; i++) {
		for (j = 2; j <= i - 1; j++) {
			a[i][j] = (a[i - 1][j - 1] + a[i - 1][j])% 1000000007;
		}
	}

	while (scanf("%d", &n) != EOF) {
		for (i = 1; i <= n; i++) {
			printf("%d ", a[n][i]);
		}
		printf("\n");
	}
	
	return 0;
}