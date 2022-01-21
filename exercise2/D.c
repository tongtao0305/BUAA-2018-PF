#include<stdio.h>

int max(long long int a,long long int b);

int main(void) {
	long long int x, y, a, b,i,j,t,count=0;
	
	scanf("%lld", &t);
	
	for (j = 1; j <= t; j++) {

		scanf("%lld %lld", &x, &y);

		for (i = 1; i <= (x*y / i); i++) {
			
			if ((x*y) % i == 0) {
				if (i != (x*y / i))
					count += 2;
				else
					count++;
			}
		}

		printf("%lld\n", count);
		count = 0;
	}
	
	return 0;
}

