#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b)//����ȽϺ����ĸ�ʽ��qsort�涨��
{
	return *(int *)a > *(int *)b ? 1 : -1;//ǿ��ת����intָ�����ͣ�Ȼ���ָ��
}int *a;
int main(void) {
	int n,i,l,r;
	long long int min;//min������long long int
	
	scanf("%d", &n);
	
	a = (int*)malloc(sizeof(int)*n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	qsort(a, n, sizeof(a[0]), cmp);
	//�������Ԫ���׵�ַ���������Ԫ�ظ������������Ԫ�ش�С���ȽϺ���
	
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
int cmp(const void *a, const void *b)//����ȽϺ����ĸ�ʽ��qsort�涨��
{
	return *(int *)a > *(int *)b ? 1 : -1;//ǿ��ת����intָ�����ͣ�Ȼ���ָ��
}int *a;
int main(void) {
	int n,i,l,r;
	long long int min;//min������long long int
	
	scanf("%d", &n);
	
	a = (int*)malloc(sizeof(int)*n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	qsort(a, n, sizeof(a[0]), cmp);
	//�������Ԫ���׵�ַ���������Ԫ�ظ������������Ԫ�ش�С���ȽϺ���
	