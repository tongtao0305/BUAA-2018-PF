#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int n,i,j,k;
	int *a,*b;
	
	scanf("%d", &n);
	a = (int*)malloc(sizeof(int)*n);
	b = (int*)malloc(sizeof(int)*n);
	
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n; i++)
		scanf("%d", &b[i]);
	for (i = 0; i < n; i++)
		printf("%d ", a[i] + b[i]);
	
	free(a);
	free(b);
	return 0;
}