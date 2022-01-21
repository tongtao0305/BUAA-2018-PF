#include<stdio.h>
int GCD(int a, int b);

int main(void) {
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d", GCD(a, b));

	return 0;
}

int GCD(int a, int b) {
	return b == 0 ? a : GCD(b, a%b);
}