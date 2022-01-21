#include<stdio.h>

int main(void) {
	int a, b, c;
	double a1, b1, c1;
	double result;

	scanf("%d %d %d", &a, &b, &c);
	a1 = (double)a;
	b1 = (double)b;
	c1 = (double)c;

	result = (((a1 / b1) / c1) + (a1 / (b1 / c1))) / 2;

	printf("%.7f", result);
	
	return 0;
}