#include<stdio.h>
#define Pi 3.14


int  main(void) {
	double r, h;
	double s;
	
	scanf("%lf %lf", &r, &h);
	
	s = 2 * Pi*r*h+2*Pi*r*r;
	
	printf("%.4f", s);
	
	return 0;
}