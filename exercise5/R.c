#include<stdio.h>
#include<stdlib.h>
int main(void) 
{
	int t,l,r,c,i,j;
	int x, n;
	int *a;
	scanf("%d %d", &x, &n);
	a = (int*)malloc(sizeof(int)*x);
	
	for (i = 0; i < x; i++)
		a[i] = 0;
	
	for (j=1;j<=n;j++)
	{
		scanf("%d %d %d %d", &t, &l, &r, &c);
		if (t == 1) {
			for (i = l; i <= r; i++)
				a[i] = c;
		}
		else if (t == 0) {
			for (i = l; i <= r; i++)
				a[i] = a[i] + c;
		}
		for (i = 0; i < x; i++)
			printf("%d ", a[i]);
		printf("\n");
	}
	
	free(a);
	return 0;
}