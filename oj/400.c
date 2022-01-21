#include<stdio.h>
#include<math.h>

int main(void) {
	long long int a, b;
	
	scanf("%lld %lld", &a, &b);

	if (b == 0) {
		printf("error");
	}
	else {
		printf("%.f", floor((double)a / (double)b));
	}

	return 0;
}