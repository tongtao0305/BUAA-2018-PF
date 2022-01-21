#include<stdio.h>
#include<math.h>
double f(double);
int main(void) {
	double l, r, mid, y;
	
	while (scanf("%lf", &y) != EOF) {
		l = 4.0;
		r = 8.0;
		if (y<f(l) || y>f(r)) {
			printf("No solution!\n");
		}
		else {
			while (r - l > 0.0000001) {
				mid = (r + l) / 2;
				if (f(mid) >= y)
					r = mid;
				else
					l = mid;
			}
			printf("%.6lf\n", (l + r) / 2);
		}
	}

	return 0;
}
double f(double x) {
	return 2.0 * sin(x) + sin(2.0 * x) + sin(3.0 * x) + (x - 1)*(x-1);
}