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
	int i, j, k, count, temp, sum=0;

	scanf("%d", &n);
	a = (int*)malloc(sizeof(int)*n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		scanf("%d", &temp);
		sum = sum + a[i] * temp;
	}

	printf("%d", sum);

	free(a);
	return 0;
}