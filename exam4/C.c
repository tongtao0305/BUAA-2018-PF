#include<stdio.h>

int main(void) {
	int n;
	double a, x, b,sum;
	
	scanf("%d %lf%% %lf %lf", &n, &a, &x, &b);
	
	sum = x;
	while (n--) {
		sum = sum * (1 + 0.01*a) - b;
	}
	
	printf("%.3lf", sum);
	
	return 0;
}