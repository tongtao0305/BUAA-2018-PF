#include<stdio.h>
#include<stdlib.h>

int a[500001];
int b[101];

int main(void) {
	int n;
	int i, j, k;

	scanf("%d", &n);

	a[1] = 1;
	a[2] = 1;
	a[3] = 1;
	for (i = 4; i <= 500000; i++) {
		a[i] = (a[i - 2] + a[i - 3])%100000007;
	}
	
	for (i = 1; i <= n; i++) 
		scanf("%d", &b[i]);
	
	for (i = 1; i <= n; i++)
		printf("%d\n", a[b[i]]);
	
	return 0;
}

