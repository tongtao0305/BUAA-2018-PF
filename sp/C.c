#include<stdio.h>
#include<math.h>

int main(void) {
	double a, b, c, d, result;

	scanf("(%lf, %lf) (%lf, %lf)", &a, &b, &c, &d);

	result = sqrt(pow(fabs(a-c),2) + pow(fabs(b-d),2));

	printf("%.3fm", result);

	return 0;
}