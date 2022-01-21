#include<stdio.h>

int main(void) {
	long long int i, n,a,b;
	long long int result[1000001];

	scanf("%lld", &n);

	for (i = 1; i <= n; i++) {
		scanf("%lld %lld", &a, &b);
		result[i] = a * b-a-b;
	}
	
	for (i = 1; i <= n; i++) {
		printf("%lld\n", result [i]);
	}

	return 0;
}