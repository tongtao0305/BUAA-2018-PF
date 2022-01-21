#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int chd(double w);
double f(double);
double fp(double);
double n, m, a;
const double eps = 1e-6;

int main(void) {
	double x=0;
	
	scanf("%lf %lf %lf", &n, &m, &a);
	
	while (chd(fp(x)) == 0)
		x = ((double)rand() / (double)RAND_MAX - 0.5) * 6;
	while (chd(f(x)) != 0)
		x = x - f(x) / fp(x);
	printf("%.8lf", x);
	
	return 0;
}

int chd(double w) {
	if (w > eps)
		return 1;
	else if (w < -eps)
		return -1;
	else
		return 0;
}
double f(double x) {
	return pow(x, n) / m + cos(x)-a;
}
double fp(double x) {
	return n * pow(x, n - 1) / m - sin(x);
}