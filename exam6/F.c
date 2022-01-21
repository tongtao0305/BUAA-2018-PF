#include<stdio.h>
#include<math.h>
#define PI 3.14159265358979323846

double f(double);

int main(void) {
	double y;
	double l = 0.33, r = 10, mid;
	int i, j, k;

	scanf("%lf", &y);

	while (r - l > 0.00000001) {
		mid = (l + r) / 2;
		if (f(mid) > y)
			l = mid;
		else
			r = mid;
	}

	printf("%.5lf\n", (l + r) / 2);

	return 0;
}

double f(double x) {
	return (sin(sqrt(x)) + 1/exp(pow(x, 1.0 / 3.0))) / log(PI*x);
}