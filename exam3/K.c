#include<stdio.h>

int main(void) {
	int x;
	double sum;
	
	scanf("%d", &x);
	
	if (x <= 150)
		sum = x * 0.505;
	else if (x <= 400)
		sum = 150 * 0.505 + (x - 150)*0.606;
	else
		sum = 150 * 0.505 + 250 * 0.606 + (x - 400)*0.707;
	
	printf("%.4lf", sum);
	
	return 0;
}