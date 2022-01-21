#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b)
{
	int *ap = *(int **)a;
	int *bp = *(int **)b;

	if (ap[0] == bp[0])
		return ap[1] - bp[1];
	else
		return ap[0] - bp[0];
}

int main(void) {
	int n,a,b,count=0,temp=0;
	int i, j, k;
	int **xd;
	
	//定义动态数组
	scanf("%d", &n);
	xd = (int **)malloc(n * sizeof(int *));
	for (i = 0; i < n; i++)
		xd[i] = (int *)malloc(2 * sizeof(int));
	//读取线段
	for (i = 0; i < n; i++) {
		scanf("%d %d", &xd[i][0], &xd[i][1]);
	}
	
	//qsort(xd, n, sizeof(xd[0]), cmp);

	for (i = 0; i < n; i++) {
		for (j = n-1; j > i; j--) {
			if ((xd[j][0] < xd[i][0]) || ((xd[j][0] == xd[i][0]) && (xd[j][1] < xd[i][1]))) {
				temp = xd[j][0];
				xd[j][0] = xd[i][0];
				xd[i][0] = temp;

				temp = xd[j][1];
				xd[j][1] = xd[i][1];
				xd[i][1] = temp;
			}
		}
	}
	
	for (i = 0; i < n; i++)
	{
		printf("%d %d\n", xd[i][0], xd[i][1]);
	}



	for (i = 0; i < n; i++)
		free(xd[i]);
	free(xd);

	return 0;
}	
