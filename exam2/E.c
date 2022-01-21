#include<stdio.h>

int main(void) {
	double number;

	scanf("%lf", &number);
	
	printf("%.0f %.6lf", number, number-(int)number);
	
	return 0;
}