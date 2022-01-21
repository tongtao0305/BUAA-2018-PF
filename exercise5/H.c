#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int n;
	int *a;
	int i, j, k;

	scanf("%d", &n);
	
	a = (int*)malloc(sizeof(int)*(n+1));
	
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	
	for (i = n; i >= 1; i--) {
		if (i % 2 == 1)
			printf("%d ", a[i]);
	}

	for (i = 1; i <= n; i++) {
		if (i % 2 == 0)
			printf("%d ", a[i]);
	}

	free(a);
	
	return 0;
}