#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b)//这个比较函数的格式是qsort规定的
{
	return *(int *)a > *(int *)b ? 1 : -1;//强制转换成int指针类型，然后解指针
}int *a;
int main(void) {
	int n,i,l,r;
	long long int min;//min必须是long long int
	
	scanf("%d", &n);
	
	a = (int*)malloc(sizeof(int)*n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	qsort(a, n, sizeof(a[0]), cmp);
	//待排序的元素首地址，待排序的元素个数，待排序的元素大小，比较函数
	
	min = a[1] - a[0];
	l = a[0];
	r = a[1];
	for (i = 0; i < n - 1; i++) {
		if ((long long int)a[i + 1] - a[i] < min) {
			min = (long long int)a[i + 1] - a[i];
			l = a[i];
			r = a[i + 1];
		}
	}

	printf("%d %d", l, r);
	free(a);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b)//这个比较函数的格式是qsort规定的
{
	return *(int *)a > *(int *)b ? 1 : -1;//强制转换成int指针类型，然后解指针
}int *a;
int main(void) {
	int n,i,l,r;
	long long int min;//min必须是long long int
	
	scanf("%d", &n);
	
	a = (int*)malloc(sizeof(int)*n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	qsort(a, n, sizeof(a[0]), cmp);
	//待排序的元素首地址，待排序的元素个数，待排序的元素大小，比较函数
	