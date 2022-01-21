#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int m, n,sum=0,left,count;
	int i, j, k;
	int *a;
	
	scanf("%d %d", &n, &m);
	
	a = (int*)malloc(sizeof(int)*n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		sum = sum + a[i];
	}
	
	if (m == n)
		printf("Rich!");
	else {
		for (i = sum; i > 0; i--) {
			left = i;
			count = 0;
			for (j = 0; j < n; j++) {
				if (left >= a[j]) {
					left = left - a[j];
					count++;
				}
			}
			if (count == m) {
				printf("%d", i);
				break;
			}
		}
	}
	
	return 0;
}