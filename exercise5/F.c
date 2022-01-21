#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	int d, n;
	int a[101];
	int i, j, k;
	long long int sum = 0;
	
	scanf("%d %d", &d, &n);
	
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	
	for (i = 1; i <= n; i++) {
		while (a[i]--) {
			sum = sum + d * pow(10, a[i]);
		}
	}
	
	printf("%lld", sum);
	
	return 0;
}