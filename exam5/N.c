#include<stdio.h>

long long int GCD(long long int a,long long int b);

int main(void) {
	long long int a, b, x, y;
	long long int i,count=0;

	while (scanf("%lld %lld", &a, &b) != EOF) {
		for (i = 1; i < a ; i++) {
			if ((i*(a-i)/GCD(i, a - i)) == b) {
				count = 1;
				break;
			}
		}
		if (count == 0)
			printf("No Solution\n");
		else
			printf("%lld %lld\n", i, a - i);
		count = 0;
	}
	


	return 0;
}

long long int GCD(long long int a,long long int b) {
	return b == 0 ? a : GCD(b, a%b);
}