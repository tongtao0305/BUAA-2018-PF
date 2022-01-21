#include<stdio.h>

int main(void) {
	double a[10],sum=0,pj;
	int i, j, k,count=0;
	
	for (i = 0; i < 10; i++) {
		scanf("%lf", &a[i]);
		sum = sum + a[i];
	}

	pj = sum / 10.0;
	
	for (i = 0; i < 10; i++)
		if (a[i] > pj)
			count++;
	
	printf("%.3lf\n%d", pj, count);
	
	return 0;
}