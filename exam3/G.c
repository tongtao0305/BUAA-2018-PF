#include<stdio.h>

int main(void) {
	int a, b, c, d;
	
	scanf("%d.%d %d.%d", &a, &b, &c, &d);
	a = a * 10000 + b;
	c = c * 10000 + d;
	
	printf("%.4lf", a%c/10000.0);

	return 0;
}