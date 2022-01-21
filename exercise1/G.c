#include<stdio.h>

int main(void) {
	int a, b, c;
	
	scanf("(%d,%d,%d)", &a, &b, &c);
	
	printf("%08d\n", a);
	printf("%o\n",b);
	printf("%X\n", c);
	
	return 0;
}