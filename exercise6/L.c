#include<stdio.h>
#include<stdlib.h>
#define Max(a,b) (a>b?a:b) 
#define Min(a,b) (a<b?a:b)
int function( int, int, int);
int a[100000];
int wellwell;
int main(void) {
	int n, m;
	int i, j, k, sum, temp, result;
	
	while (scanf("%d %d", &n, &m) != EOF) {
		//读取每本书的重量
		for (i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		
		result = function(0, n - 1, m);
		printf("第一次使用函数的结果为：%d\n", result);
		
		for (i = 0; i < n - m + 1; i++) {
			sum = 0;
			for (j = 0; j <= i; j++) {
				sum = sum + a[j];
			}
			temp = Max(sum,function(i + 1, n - 1, m - 1));
			printf("临时结果为：%d\n",temp);
			if (temp < result)
				result = temp;
		}
		printf("最终结果为：%d\n",result);
	}

	return 0;
}

int function( int l, int r, int left) {
	int i,j,k,sum=0;

	if (l > r)
		return 0;
	else if (left == 1) {
		for (i = l; i <= r; i++) {
			sum = sum + a[i];
		}
		return sum;
	}
	else {
		for (i = l; i <= r-left+1; i++) {
			sum = sum + a[i];
		}
		return Max(sum, function( i + 1, r, left - 1));
	}
}