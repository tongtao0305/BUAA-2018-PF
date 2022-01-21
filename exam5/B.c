#include<stdio.h>

int main(void) {
	long long int l, r,i;
	
	scanf("%lld %lld", &l, &r);
	
	for (i = l; i <= r; i++) {
		if (i % 10 == 1 || i % 10 == 8 || i % 10 == 7 || i % 10 == 3)
			printf("%lld\n", i);
	}
	
	return 0;
}