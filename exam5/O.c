#include<stdio.h>

int s(int, int);

int main(void) {
	
	int n, r;

	scanf("%d %d", &n, &r);

	printf("%d", s(n, r));
	
	return 0;
}


int s(int x, int y) {
	if (x < y || y == 0)
		return 0;
	if ((y == 1)||(x==y))
		return 1;
	else
		return s(x - 1, y)*y + s(x - 1, y - 1);
}