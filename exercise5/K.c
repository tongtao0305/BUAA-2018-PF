#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b)//����ȽϺ����ĸ�ʽ��qsort�涨��
{
	return *(int *)a > *(int *)b ? 1 : -1;//ǿ��ת����intָ�����ͣ�Ȼ���ָ��
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



	