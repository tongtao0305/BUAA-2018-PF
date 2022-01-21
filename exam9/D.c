#include<stdio.h>
#include<math.h>
int main(void) {
	double ;
	long long int k, n, s, p,sum=0;
	
	scanf("%lld %lld %lld %lld", &k, &n, &s, &p);
	
	if (n%s == 0)
		sum = k * (n / s);
	else
		sum = k * (n / s + 1);

	if (sum%p == 0)
		sum = sum / p;
	else
		sum = sum / p + 1;
	
	printf("%lld", sum);
	
	return 0;
}