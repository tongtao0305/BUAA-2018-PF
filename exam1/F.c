#include<stdio.h>

int main(void) {
	int a, b;
	long long int result;

	scanf("%d %d", &a, &b);
	
	result = (long long int)a*b;

	printf("%lld", result);
	
	return 0;
}