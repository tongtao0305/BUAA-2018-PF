#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define Mod 1000000007 
#define Max(a,b) (a>b?a:b) 
#define Min(a,b) (a<b?a:b)

int main(void) {
	int n;
	int *a;
	int i, j, k, count=0, temp, sum;

	scanf("%d", &n);
	a = (int*)malloc(sizeof(int)*n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (j != i && a[j]!=a[i])
				count++;
		}
		if (count == n - 1)
			printf("%d ", a[i]);
		count = 0;
	}

	free(a);
	return 0;
}