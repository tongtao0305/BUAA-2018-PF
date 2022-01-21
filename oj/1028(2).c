#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define Mod 1000000007 
#define Max(a,b) (a>b?a:b) 
#define Min(a,b) (a<b?a:b)

int main(void) {
	int n,len;//数组的长度
	int *a,*b;
	int i, j, k, count, temp, sum;

	//读取数组的长度和数组元素的值
	scanf("%d", &len);
	a = (int*)malloc(sizeof(int)*len);
	for (i = 0; i < len; i++) {
		scanf("%d", &a[i]);
	}
	//读取偏移的位数以及定义一个临时数组来记录被冲走的元素
	scanf("%d", &n);
	b = (int*)malloc(sizeof(int)*n);

	for (i = 0; i < n; i++) {
		b[i] = a[len-n + i];
	}

	for (i = len - 1; i >= n; i--) {
		a[i] = a[i - n];
	}
	for (i =0; i < n; i++) {
		a[i] = b[i];
	}

	for (i = 0; i < len; i++)
		printf("%d ", a[i]);

	free(a);
	free(b);
	return 0;
}