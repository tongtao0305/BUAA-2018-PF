#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b)//����ȽϺ����ĸ�ʽ��qsort�涨��
{
	return *(int *)a > *(int *)b ? 1 : -1;//ǿ��ת����intָ�����ͣ�Ȼ���ָ��
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
	//�������Ԫ���׵�ַ���������Ԫ�ظ������������Ԫ�ش�С���ȽϺ���

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
