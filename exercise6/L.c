#include<stdio.h>
#include<stdlib.h>
#define Max(a,b) (a>b?a:b) 
#define Min(a,b) (a<b?a:b)
int function( int, int, int);
int a[100000];
int wellwell;
int main(void) {
	int n, m;
	int i, j, k, sum, temp, result;
	
	while (scanf("%d %d", &n, &m) != EOF) {
		//��ȡÿ���������
		for (i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		
		result = function(0, n - 1, m);
		printf("��һ��ʹ�ú����Ľ��Ϊ��%d\n", result);
		
		for (i = 0; i < n - m + 1; i++) {
			sum = 0;
			for (j = 0; j <= i; j++) {
				sum = sum + a[j];
			}
			temp = Max(sum,function(i + 1, n - 1, m - 1));
			printf("��ʱ���Ϊ��%d\n",temp);
			if (temp < result)
				result = temp;
		}
		printf("���ս��Ϊ��%d\n",result);
	}

	return 0;
}

int function( int l, int r, int left) {
	int i,j,k,sum=0;

	if (l > r)
		return 0;
	else if (left == 1) {
		for (i = l; i <= r; i++) {
			sum = sum + a[i];
		}
		return sum;
	}
	else {
		for (i = l; i <= r-left+1; i++) {
			sum = sum + a[i];
		}
		return Max(sum, function( i + 1, r, left - 1));
	}
}