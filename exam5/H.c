#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b)//����ȽϺ����ĸ�ʽ��qsort�涨��
{
	return *(int *)a > *(int *)b ? -1 : 1;//ǿ��ת����intָ�����ͣ�Ȼ���ָ��
}

int main(void) {
	int n,x,sum=0,count=0;
	int i, j, k;
	int *a;
	scanf("%d %d", &n, &x);
	
	a = (int*)malloc(sizeof(int)*n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	qsort(a, n, sizeof(a[0]), cmp);	//�������Ԫ���׵�ַ���������Ԫ�ظ������������Ԫ�ش�С���ȽϺ���
	
	for (i = 0; i <= n - 1; i++) {
		if ((i + 1) % (x+1) == 1) {
			sum = sum + a[i];
			count++;
		}
	}
	if ((n%(x+1)==1))
		printf("%d %d", sum, n-count+1);//���һ��֮��պû�ʣһ���͸����ԣ���ʱʱ��Ҫ��1
	else
		printf("%d %d", sum, n - count);//������������̳Եĸ�������ʱ��
	return 0;
}