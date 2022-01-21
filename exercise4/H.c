#include<stdio.h>

int main(void) {
	int n;
	int i,j,temp,max=0;
	int *a;
	
	while (scanf("%d", &n)!=EOF) {
		a = (int*)malloc(sizeof(int)*(n + 1));
		//读取数字
		for (i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
		}

		//选择排序
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
				max = n - i + 1;//n-i+1是至少引用了a[i]次的论文数量，a[i]是引用次数
		}
		printf("%d\n", max);
		max = 0;
	}
	return 0;
}