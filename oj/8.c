#include<stdio.h>

int main(void) {
	int t,i;
	long long int a, b, c, d, e, f, g, h,result=0;
	
	scanf("%d", &t);

	for (i = 1; i <= t; i++) {

		scanf("%lld %lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &g, &h);

		result = (a*c) / b + (d*g*h) / (e*f);

		printf("%lld\n", result);
	}
	
	return 0;
}