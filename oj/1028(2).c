#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define Mod 1000000007 
#define Max(a,b) (a>b?a:b) 
#define Min(a,b) (a<b?a:b)

int main(void) {
	int n,len;//����ĳ���
	int *a,*b;
	int i, j, k, count, temp, sum;

	//��ȡ����ĳ��Ⱥ�����Ԫ�ص�ֵ
	scanf("%d", &len);
	a = (int*)malloc(sizeof(int)*len);
	for (i = 0; i < len; i++) {
		scanf("%d", &a[i]);
	}
	//��ȡƫ�Ƶ�λ���Լ�����һ����ʱ��������¼�����ߵ�Ԫ��
	scanf("%d", &n);
	b = (int*)malloc(sizeof(int)*n);

	for (i = 0; i < n; i++) {
		b[i] = a[len-n + i];
	}

	for (i = len - 1; i >= n; i--) {
		a[i] = a[i - n];
	}
	for (i =0; i < n; i++) {
		a[i] = b[i];
	}

	for (i = 0; i < len; i++)
		printf("%d ", a[i]);

	free(a);
	free(b);
	return 0;
}