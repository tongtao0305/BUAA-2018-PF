#include<stdio.h>

int main(void) {
	long long int n, x,i,temp,sum;

	scanf("%lld %lld", &n, &x);
	
	scanf("%lld", &sum);
	
	for (i=1;i<=n;i++){
		scanf("%lld", &temp);
		sum = sum * x + temp;
		if (sum > 1000000007) {
			sum = sum % 1000000007;
		}
	}
	
	printf("%lld",sum);
	
	return 0;
}