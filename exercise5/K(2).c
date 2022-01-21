#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int* BucketSort(int *p, int length);//桶排序 p待排序数组指针 length数组长度

int main(void) {
	long long int n, i, j, k, max;
	int *a;

	while (scanf("%lld", &n) != EOF) {
		a = (int*)malloc(sizeof(int)*n);
		for (i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}	

		a = BucketSort(a, n);

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


int* BucketSort(int *p, int length)
{
	int i, j,k=0;
	int *array;
	int *bucket;

	array = (int*)malloc(sizeof(int)*length);
	bucket = (int*)malloc(sizeof(int)*INT_MAX);

	//初始化
	for (i = 0; i < INT_MAX; i++)
	{
		bucket[i] = 0;
	}
	//桶排序
	for (i = 0; i < length; i++)
	{
		bucket[p[i]]++;
	}
	//输出
	for (i = 0; i < INT_MAX; i++)
	{
		for (j = 0; j < bucket[i]; j++)
		{
			array[k] = i;
			k++;
		}
	}
	free(bucket);
	return array;
}
