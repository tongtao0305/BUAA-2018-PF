#include<stdio.h>

int main(void) {
	long long int n,i,j=1;
	double sum=0;
	scanf("%lld", &n);
	
	for (i = 1; i <= 2 * n - 1; i = i + 2) {
		sum = sum + (1.0 / i)*j;
		if (j == 1)
			j = -1;
		else if (j == -1)
			j = 1;
	}
	
	printf("%.6lf", sum);
	
	return 0;
}