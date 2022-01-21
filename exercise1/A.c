#include<stdio.h>

int main(void) {
	char fh;
	double a, b, c, d,result1,result2;
	
	while (scanf("%lf %lf %lf %lf %c", &a, &b, &c, &d, &fh)==5) {
		switch (fh) {
		case '+':
			result1 = a + c;
			result2 = b + d;
			break;
		case '-':
			result1 = a - c;
			result2 = b - d;
			break;
		case '*':
			result1 = a*c - b*d;
			result2 = a*d + b*c;
			break;
		case'/':
			result1 = (a*c+b*d)/(c*c+d*d);
			result2 = (b*c-a*d)/(c*c+d*d);
			break;
		}
		printf("%.2f %.2f\n", result1, result2);
	}
	
	return 0;
}