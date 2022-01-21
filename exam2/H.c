#include<stdio.h>

int max(int, int);
int min(int, int);

int main(void) {
	
	int a, b, c, d, e, f, g, h;
	int s1=0,s2=0;

	scanf("%d %d %d %d\n%d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);

	s1 = (c - a)*(d - b) + (g - e)*(h - f);
	s2 = (min(c, g) - max(a, e))*(min(d, h) - max(b, f));

	if (a<g&&b<h&&c>e&&d>f)
		printf("%d", s1-s2);
	else
		printf("%d", s1);

	return 0;
}

int max(int a, int b) {
	if (a >= b)
		return a;
	else
		return b;
}

int min(int a, int b) {
	if (a <= b)
		return a;
	else
		return b;
}