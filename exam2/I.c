#include<stdio.h>

int main(void) {
	int d, x, y, count = 0;
	double a, b, c, sum;

	scanf("%lf %lf %lf %d", &a, &b, &c, &d);

	for (x = 0; x <= d; x++) {
		y = d - x;
		sum = x * a + y * b;

		if (fabs(sum - c) <= 1E-8) {
			printf("%d %d", x, y);
			count = 1;
			break;
		}
	}

	if (count == 0)
		printf("Jenny has a bad memory!");

	return 0;
}