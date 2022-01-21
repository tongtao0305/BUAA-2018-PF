#include<stdio.h>

int main(void) {
	char a, b;
	int c, d,result1;
	double result2;
	
	scanf("%c %c\n%d %d", &a, &b, &c, &d);

	result1 = (int)((double)a / (double)c) + (int)((double)b / (double)d);
	result2=(double)a / (double)c + (double)b / (double)d;
	
	printf("%d\n%.2f", result1, result2);
	
	return 0;
}