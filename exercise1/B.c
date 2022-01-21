#include<stdio.h>
#define EPS 0.0000001

int main(void) {
	
	double x1, x2, x3, x4;
	double y1, y2, y3, y4;
	double k1, k2,x,y;

	scanf("%lf %lf %lf %lf\n%lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
	
	if (((x1 - x2) == 0)&&((x3-x4)==0)) {
		printf("Zyysb");	//两条直线斜率都不存在
	}
	else if ((x1 - x2) == 0) {
		k2 = (y3 - y4) / (x3 - x4);
		x = x1;
		y = k2 * (x - x3) + y3;
		printf("(%.6f,%.6f)", x, y);	//第一条直线斜率不存在
	}
	else if ((x3 - x4) == 0) {
		k1 = (y1 - y2) / (x1 - x2);
		x = x3;
		y = k1 * (x - x1) + y1; 
		printf("(%.6f,%.6f)", x, y);	//第二条直线斜率不存在
	}
	else {
		k1 = (y1 - y2) /(x1 - x2);
		k2 = (y3 - y4) /(x3 - x4);
		
		if ((k1 != k2)) {
	
			x = (((y3 - y1) + k1 * x1 - k2 * x3) / (k1 - k2));
			y =( k1 * (x - x1) + y1 );

			if (fabs(x - 0.000000000000000000) < EPS) 
			{
				x = 0;
			}

			if (fabs(y - 0.000000000000000000) < EPS)
			{
				y = 0;
			}

			printf("(%.6f,%.6f)", x, y);
	}
		else {
			printf("Zyysb");
	}
	
	}

	return 0;
}