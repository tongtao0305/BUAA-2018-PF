#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int n,i;
	scanf("%d", &n);

	int *a;
	a = (int*)malloc(sizeof(int)*(n+1));
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	
	for (i = 3; i <= n; i++) {
		a[i] = a[i - 2] + a[i - 3];
	}
	
	printf("%d", a[n]);
	free(a);
	return 0;
}