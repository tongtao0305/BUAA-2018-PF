#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b)//这个比较函数的格式是qsort规定的
{
	return *(int *)a > *(int *)b ? 1 : -1;//强制转换成int指针类型，然后解指针
}
int main(void) {
	long long int n,i,j,k,max;
	int *a;

	while (scanf("%lld", &n) != EOF) {
		a = (int*)malloc(sizeof(int)*n);
		for (i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		qsort(a, n, sizeof(a[0]), cmp);
		max = (long long int)a[1] - a[0];
		for (i = 0; i < n - 1; i++) {
			if ((long long int)a[i + 1] - a[i] > max)
				max = (long long int)a[i + 1] - a[i];
		}
		printf("%lld\n", max);
		free(a);
	}
	return 0;
}



	