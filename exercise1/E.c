#include<stdio.h>

int main(void) {
	int a, b, c, d, e, f;
	double i, j;
	
	scanf("%d %d %d\n%d %d %d", &a, &b, &c, &d, &e, &f);
	
	i = (double)(c*e - b * f) / (double)(a*e - b * d);
	j = (double)(a*f - c * d) / (double)(a*e - b * d);

	printf("(%.2f,%.2f)", i, j);

	return 0;
}