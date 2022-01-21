#include<stdio.h>

int akm(int, int);

int main(void) {
	
	int m, n;
	
	scanf("%d %d", &m, &n);
	
	printf("%d", akm(m, n));
	
	return 0;
}

int akm(int m, int n) {
	if (m == 0)
		return n+1;
	else if (n == 0)
		return akm(m - 1, 1);
	else
		return akm(m - 1, akm(m, n - 1));
}