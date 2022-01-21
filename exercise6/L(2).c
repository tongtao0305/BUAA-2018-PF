#include<stdio.h>
#include<stdlib.h>
#define Max(a,b) (a>b?a:b) 
#define Min(a,b) (a<b?a:b)
int function(int,int, int, int);
int a[100000];
int result;
int main(void) {
	int n, m;
	int i, j, k, sum, temp;

	while (scanf("%d %d", &n, &m) != EOF) {
		//读取每本书的重量
		for (i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		result = 100000000000;
		function(0, 0, n - 1, m);
		printf("%d\n", result);
	}

	return 0;
}

int function(int last,int l, int r, int left) {
	int i, j, k, sum = 0;

	if (l > r) {
		if (last < result)
			result = last;
	}
	else if (left == 1) {
		for (i = l; i <= r; i++) {
			sum = sum + a[i];
		}
		if (Max(sum, last) < result)
			result = Max(sum, last);
	}
	else {
		for (i = l; i <= r - left + 1; i++) {
			sum = sum + a[i];
			function(Max(last,sum),i + 1, r, left - 1);
		}
	}
	return 0;
}