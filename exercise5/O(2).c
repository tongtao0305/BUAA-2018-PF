#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int counter[20000001] = { 0 };//记录每个点被套中的次数
int main(void) {
	int n,x,y ,i, j, k, l, r,count=-1;
	int *a;

	scanf("%d", &n);

	//以下为定义和输入
	a = (int*)malloc(sizeof(int)*n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		x = x + 10000000;
		if (a[i] < y) {
			count = 0;
			break;
		}
		if (a[i] * a[i] == x * x + y * y) {
			l= x - (int)sqrt(a[i] * a[i] - y * y)+1;
			r = x + (int)sqrt(a[i] * a[i] - y * y)-1;
		}
		else {
			l = x - (int)sqrt(a[i] * a[i] - y * y);
			r = x + (int)sqrt(a[i] * a[i] - y * y);
		}
		for (j = l; j <= r; j++) {
			counter[j]++;
		}
	}

	if (count != 0) {
		for (i = 0; i <= 20000000; i++) {
			if (counter[i] == n) {
				count = 1;
				break;
			}
		}
	}

	if (count == 1)
		printf("Max is an expert!");
	else
		printf("Max is a newbie.");

	free(a);
	return 0;
}