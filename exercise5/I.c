#include<stdio.h>
#include<stdlib.h>
long long int cmp(const void *a, const void *b)//这个比较函数的格式是qsort规定的
{
	return *(long long int *)a > *(long long int *)b ? 1 : -1;//强制转换成int指针类型，然后解指针
}
int main(void) {
	long long int n,i,j,k,count=0,max=0,sum=0;
	long long int *a,*b;
	
	scanf("%lld", &n);

	a = (long long int*)malloc(sizeof(long long int)*n);
	b = (long long int*)malloc(sizeof(long long int)*n);
	
	for (i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
	}
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (j != i) {
				b[count] = a[j];
				count++;
			}
		}
		qsort(b, n-1, sizeof(b[0]), cmp);
		for (j = 0; j < n - 1; j++) {
			b[j] = b[j] + (n - j-1);
			if (b[j] > max)
				max = b[j];
		}
		if (a[i] + n >= max)
			sum++;
		count = 0;
		max = 0;
	}
	
	printf("%lld", sum);
	free(a);
	free(b);
	
	return 0;
}