#include<stdio.h>

void fun(int *a, int *b);

int main(void) {
	int a, b, c, d;
	int na, nb, nc, nd;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	na = a; nb = b; nc = c; nd = d;

	fun(&na, &nb);
	fun(&nc, &nd);
	fun(&nb, &nc);
	
	printf("%d %d %d %d\n", na, nb, nc, nd);
	
	printf("na=a+b\n");
	printf("nb=a+c+d\n");
	printf("nc=a\n");
	printf("nd=c\n");
	
	return 0;
}

void fun(int *a, int *b) {
	*a = *a + *b;
	*b = *a - *b;
}