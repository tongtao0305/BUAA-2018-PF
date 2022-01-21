#include<stdio.h>

int main(void) {
	int n,i;
	long long int a, b, d,x,y,count=0;
	
	scanf("%d\n%lld %lld %lld", &n, &a, &b, &d);
	
	for (i = 1; i <= n; i++) {
		scanf("%lld %lld", &x, &y);
		if ((a + b - d < x + y) && (x + y < a + b + d) && (a - b - d < x - y) && (x - y < a - b + d))
			count++;
	}
	
	printf("%lld", count);
	
	return 0;
}
