#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b)//这个比较函数的格式是qsort规定的
{
	return *(int *)a > *(int *)b ? 1 : -1;//强制转换成int指针类型，然后解指针
}

int main(void) {
	long long int n;
	long long int i, j, k,temp,count=0;
	long long int *a;

	scanf("%lld", &n);

	a = (long long int*)malloc(sizeof(long long int)*n);

	for (i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
	}

	qsort(a, n, sizeof(a[0]), cmp);
	//待排序的元素首地址，待排序的元素个数，待排序的元素大小，比较函数

	temp = a[1] - a[0];
	if (n <= 2)
		count = 0;
	else {
		for (i = 1; i < n; i++) {
			if (a[i] - a[i - 1] != temp) {
				count = 1;
				break;
			}
		}
	}

	if (count == 0)
		printf("Yes");
	else
		printf("NO");

	return 0;
}
