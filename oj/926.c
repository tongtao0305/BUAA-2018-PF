#include <stdio.h>
double getDirectedArea(double x1, double y1, double x2, double y2, double x3, double y3){
	x2 -= x1; y2 -= y1;
	x3 -= x1; y3 -= y1;
	return (x2 * y3 - x3 * y2) * 0.5;
}
int main(){
	int n;
	double x1, y1, x2, y2, x3, y3;
	double area = 0;
	scanf("%d%lf%lf%lf%lf", &n, &x1, &y1, &x2, &y2);
	n -= 2;
	while(n --){
		scanf("%lf%lf", &x3, &y3);
		area += getDirectedArea(x1, y1, x2, y2, x3, y3);
		x2 = x3;
		y2 = y3;
	}
	printf("%.3lf\n", area > 0 ? area : - area);
	return 0;
}

