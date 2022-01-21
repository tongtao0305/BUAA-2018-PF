#include<stdio.h>
#include<math.h>

double f(double);

int main(void) {
	double y;
	double l=10, r=30,mid;
	int i, j, k;
	
	scanf("%lf", &y);
	
	while(r-l>0.00000001) {
		mid = (l + r) / 2;
		if (f(mid) > y)
			l = mid;
		else
			r = mid;
	}
	
	printf("%.5lf", (l +r) / 2);
	
	return 0;
}

double f(double x) {
	return (exp(-sqrt(x / 10.0))) / (log(x / 10.0));
}