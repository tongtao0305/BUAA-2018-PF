#include<stdio.h>

int main(void) {
	double x,temp=1,result=1;
	int m,i,j,k;
	
	scanf("%lf %d", &x, &m);
	
	for (i = 1; i <= m ; i++) {
		temp = temp * x*x;
		temp = temp / ((2.0 * i - 1.0) * (2.0 * i));

		if (i % 2 == 1)
			result = result - temp;
		else
			result = result + temp;
	}
	
	printf("%.6lf", result);
	
	return 0;
}