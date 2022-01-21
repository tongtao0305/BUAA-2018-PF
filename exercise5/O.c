#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int count1[10000001] = { 0 }, count2[10000001] = {0};
int main(void) {
	int n,i,j,k,l,r,mina= 2147483647,min;
	int *a,*x,*y;
	int count = 0;
	
	scanf("%d", &n);
	
	//以下为定义和输入
	a = (int*)malloc(sizeof(int)*n);
	x = (int*)malloc(sizeof(int)*n);
	y = (int*)malloc(sizeof(int)*n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (a[i] < mina) {
			mina = a[i];
			min = i;
		}
	}
	for (i = 0; i < n; i++) {
		scanf("%d %d", &x[i],&y[i]);
	}
	
	for (i = 0; i < n; i++) {
		if (a[i] < y[i])
			continue;
		l = x[i] - (int)sqrt(a[i] * a[i] - y[i] * y[i]);
		r = x[i] + (int)sqrt(a[i] * a[i] - y[i] * y[i]);
		for (j = l; j <= r; j++) {
			if (j >= 0)
				count1[j]++;
			else
				count2[-j]++;
		}
	}
	
	l = x[min] - a[min];
	r = x[min] + a[min];
	for (i = l; i <= r; i++) {
		if (i >= 0)
			if (count1[i] == n) {
				count = 1;
				break;
			}
		else 
			if (count2[-i] == n) {
				count = 1;
				break;
			}
	}

	if (count == 1)
		printf("Max is an expert!");
	else
		printf("Max is a newbie.");
	
	free(a);
	free(x);
	free(y);
	return 0;
}