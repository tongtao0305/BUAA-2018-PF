#include<stdio.h>
#include<math.h>

int main(void) {
	double a, b, c;
	double x1, x2;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	if ((b*b - 4 * a*c<0)||((b==0)&&(a*c<0))) {
		printf("No Solution!");
	}
	else {
		x1 = (-b - sqrt(b*b-4 * a * c)) / (2.0 * a);
		x2 = (-b + sqrt(b*b-4 * a * c)) / (2.0 * a);
		if (x1<=x2)
			printf("%.4lf %.4lf", x1, x2);
		else
			printf("%.4lf %.4lf", x2, x1);
	}
	
	return 0;
}