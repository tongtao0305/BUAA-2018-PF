#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int **a;
	int n,i,j,k,sum=0;
	
	scanf("%d", &n);

	a = (int**)malloc(sizeof(int*)*(n+1));
	for (i = 1; i <= n; i++)
		a[i] = (int*)malloc(sizeof(int)*(n+1));//动态定义一个二维数组
	
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%d", &a[i][j]);
		}
		getchar();
	}
	
	for (i = 1; i <= n; i++) {
		for (j = n; j >= 1; j--) {
			for (k = 1; k <= n; k++) {
				sum = sum + a[i][k] * a[j][k];
			}
			printf("%d ",sum );
			sum = 0;
		}
		printf("\n");
	}
	
	return 0;
}