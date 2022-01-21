#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define PI 3.141592653589793238462643383249901429
double *x, *y;

int main(void) {
	int n, i, j, k;
	double	a,b;
	
	scanf("%d", &n);
	x = (double*)malloc(sizeof(double)*n);
	y = (double*)malloc(sizeof(double)*n);
	
	for (i = 0; i < n; i++) {
		scanf("%lf %lf", &a, &b);
		x[i] = sqrt(a*a + b * b);		
		
		if (a == 0 && b == 0) {
			y[i] = 0;
		}
		else {
			y[i] = atan2(b, a);
			if (y[i] < 0)
				y[i] = y[i] + 2*PI;
		}
	}
	
	for (i = 0; i < n; i++) {
		printf("%.7lf %.7lf\n", x[i], y[i]);
	}
	free(x);
	free(y);
	return 0;
}