#include<stdio.h>
long long int dectobin(long long int n);
int main(void) {
	long long int x,count=0;
	scanf("%lld", &x);
	x = dectobin(x);
	
	while (x > 0) {
		if (x % 10 == 1) {
			count++;
		}
		x = x / 10;
	}

	printf("%lld", count);
	
	return 0;
}

long long int dectobin(long long int n) {
	long long int result = 0, k = 1, i, temp;
	temp = n;
	while (temp) {
		i = temp % 2;
		result = k * i + result;
		k = k * 10;
		temp = temp / 2;
	}
	return result;
}