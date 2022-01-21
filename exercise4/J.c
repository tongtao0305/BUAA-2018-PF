#include<stdio.h>

int main(void) {
	int n,count=0;
	int i,j;
	int *a;
	
	scanf("%d", &n);
	
	a = (int*)malloc(sizeof(int)*(n + 1));
	
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	
	for (i = 1; i <= n; i++) {
		for (j = i + 1; j <= n; j++) {
			if (a[j] < a[i])
				count++;
		}
	}
	
	printf("%d", count);
	
	
	return 0;
}