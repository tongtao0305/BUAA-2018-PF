#include<stdio.h>

int main(void) {
	long long int n,count = 0;
	scanf("%lld", &n);

	while (n != 0) {
		n = n / 5;
		count =count+ n;
	}

	printf("%lld", count);
	return 0;
}