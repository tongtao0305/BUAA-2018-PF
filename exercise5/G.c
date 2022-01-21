#include<stdio.h>

int GCD(int a, int b);

int main(void) {
	int n,a,b;
	int i;
	scanf("%d", &n);
	
	for (i = 1; i <= (n/2); i++) {
		if (GCD(i, n - i) == 1) {
			a = i;
			b = n - i;
		}
	}
	
	printf("%d %d", a, b);
	
	return 0;
}

int GCD(int a, int b) {
	return b == 0 ? a : GCD(b, a%b);
}