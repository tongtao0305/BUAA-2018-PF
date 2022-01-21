#include<stdio.h>

int main(void) {
	int a, b;
	
	while (scanf("%d", &a) == 1) {
		b = (a % 10) * 100 + (a % 100) - (a % 10) + (a / 100);
		printf("%d\n", b);
	}

	return 0;
}