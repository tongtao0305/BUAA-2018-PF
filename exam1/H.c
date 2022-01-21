#include<stdio.h>

int main(void) {
	int a, b,c;

	scanf("%d %d", &a, &b);
	c = a / b;
	a = a % b;

	if (c != 0) {
		if (a != 0) {
			printf("%d %d %d", c, a, b);
		}
		else 
			printf("%d", c);
	}
	else {
		printf("%d %d", a, b);
	}


	return 0;
}