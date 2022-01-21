#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int n;
	int i, j, k;
	int x, y,lx,ly,count=1;
	
	scanf("%d", &n);
	
	//动态定义二维数组
	int **a;
	a = (int**)malloc(sizeof(int*)*(n+1));
	for (i = 0; i < n+1; i++)
		a[i] = (int*)malloc(sizeof(int)*(n+1));
	
	for (i = 0; i <= n; i++) {
		for (j = 0; j <= n; j++)
			a[i][j] = 0;
	}

	x = n;
	y = n/2+1;
	a[x][y] = 1;
	while(count<n*n) {
		lx = x;
		ly = y;
		x++;
		y++;
		if (x > n)
			x = 1;
		if (y > n)
			y = 1;
		if ((lx == n && ly == n)||(a[x][y]!=0)) {
			x = lx-1;
			y = ly ;
		}
		count++;		
		a[x][y] = count;
	}
	
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	for (i = 0; i < n + 1; i++)
		free(a[i]);
	free(a);

	return 0;
}