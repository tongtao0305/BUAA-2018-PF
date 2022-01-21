#include<stdio.h>

int main(void) {
	int a,b,c,d;
	long int x;
	int i;
	
	scanf("%ld", &x);

	a = x % 10;
	b = (x / 10) % 10;
	c = (x / 100) % 10;
	d = x / 1000;
	
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				printf("%d", d);
			}
			else 
				printf("%d%d", c,d);
		}
		else 
			printf("%d%d%d",b, c, d);
	}else
		printf("%d%d%d%d",a,b, c, d);
	
	return 0;
}