#include<stdio.h>

int main(void) {
	int t, j;
	long long int x, y, a, b, i, count1 = 0,count2=0,count=0;

	scanf("%d", &t);

	for (j = 1; j <= t; j++) {

		scanf("%lld %lld", &x, &y);

		for (i = 1; i <= x ; i++) {
			if (x % i == 0)&&(y%(x/i)==0)&&((x/i)!=(x*y)/i) {
				count1+=2;
				if (i==(x*y/i))
					count = 1;
			}
		}

		for (i = 1; i <= y; i++) {
			if (y % i == 0) {
				count2++;
				if (i == (x*y/i))
					count = 1;
			}
		}

		printf("%lld", count1*count2-count);
		count1 = 0;
		count2 = 0;
		count = 0;
	}

	return 0;
}