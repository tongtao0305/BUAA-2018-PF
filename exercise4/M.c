#include<stdio.h>

int main(void) {
	long long int n, m,sum=0,min=100001,temp;
	long long int i, j, k;

	scanf("%lld %lld", &n, &m);
	
	for (i = 1; i <= m; i++) {
		scanf("%lld", &temp);
		sum = sum + temp;
	}

	for (i = m + 1; i <= n; i++) {
		scanf("%lld", &temp);
		if (temp < min)
			min = temp;
	}

	if (m == n)
		printf("Rich!");
	else
		printf("%lld", sum + min - 1);
	
	return 0;
}