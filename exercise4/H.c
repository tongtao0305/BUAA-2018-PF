#include<stdio.h>

int main(void) {
	int n;
	int i,j,temp,max=0;
	int *a;
	
	while (scanf("%d", &n)!=EOF) {
		a = (int*)malloc(sizeof(int)*(n + 1));
		//��ȡ����
		for (i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
		}

		//ѡ������
		for (i = 1; i <= n; i++) {
			for (j = n; j > i; j--) {
				if (a[j] < a[i]) {
					temp = a[j];
					a[j] = a[i];
					a[i] = temp;
				}
			}
		}

		for (i = 1; i <= n; i++) {
			if ((a[i] >= n - i + 1) && (n - i + 1 > max))
				max = n - i + 1;//n-i+1������������a[i]�ε�����������a[i]�����ô���
		}
		printf("%d\n", max);
		max = 0;
	}
	return 0;
}