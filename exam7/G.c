#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int a[2000][2000];
int max_n[2000];
int count_max_n[2000];
int min_m[2000];
int count_min_m[2000];
int main(void) {
	int m, n;
	int i, j, k,count=0;

	//读取矩阵的行数和列数
	scanf("%d %d", &n, &m);
	//每行每列最值初始化
	for (i = 0; i < n; i++) {
		max_n[i] = INT_MIN;
		count_max_n[i] = 0;
	}
	for (j = 0; j < m; j++) {
		min_m[j] = INT_MAX;
		count_min_m[j] = 0;
	}
	//读取矩阵
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
			if (a[i][j] > max_n[i]) {
				max_n[i] = a[i][j];
				count_max_n[i] = 1;
			}
			else if (a[i][j] == max_n[i]) {
				count_max_n[i] = 0;
			}

			if (a[i][j] < min_m[j]) {
				min_m[j] = a[i][j];
				count_min_m[j] = 1;
			}
			else if (a[i][j] == min_m[j]) {
				count_min_m[j] = 0;
			}
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (a[i][j] == max_n[i] && count_max_n[i]==1 && a[i][j] == min_m[j]&&count_min_m[j]==1)
				count++;
		}
	}

	printf("%d\n", count);

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (a[i][j] == max_n[i] && count_max_n[i] == 1 && a[i][j] == min_m[j] && count_min_m[j] == 1)
				printf("%d %d %d\n", i, j, a[i][j]);
		}
	}

	return 0;
}