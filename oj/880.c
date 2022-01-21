#include<stdio.h>

int main(void) {
	long long int n;
	scanf("%lld", &n);
	printf("%lld", (3 * (n % 100000007) % 100000007 + 1) % 100000007);
	return 0;
}