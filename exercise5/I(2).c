#include<stdio.h>
#include<stdlib.h>
long long int cmp(const void *a, const void *b)//����ȽϺ����ĸ�ʽ��qsort�涨��
{
	return *(long long int *)a > *(long long int *)b ? 1 : -1;//ǿ��ת����intָ�����ͣ�Ȼ���ָ��
}
int main(void) {
	long long int n, i, j, k, temp,count = 0, count2 = 0,max = 0, sum = 0;
	long long int *a;

	scanf("%lld", &n);
	a = (long long int*)malloc(sizeof(long long int)*n);

	for (i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
	}

	qsort(a, n, sizeof(a[0]), cmp);

	for (i = n-1; i >=0; i--) {
		max = a[i] + n;
		temp = 1;
		for (j = n - 1; j >= 0; j--) {
			if (j != i) {
				if (a[j] + temp > max) {
					count2 = 1;
					break;
				}
			}
			temp++;
		}

		if (count2 == 0)
			count++;
	}

	printf("%lld", count);
	free(a);

	return 0;
}