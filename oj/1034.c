#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int a[305][305];//保存矩阵 
int min_n[305];//每行的最大值 
int count_min_n[305];//判断是否为每行单一的最大值 
int max_m[305];//每列的最小值 
int count_max_m[305];//判断是否为每列单一的最小值 

int main(void) {
	int n,i, j, k,count=0;

	//读取矩阵的行列数
	scanf("%d", &n);
	
	//每行每列最值初始化
	for (i = 0; i < n; i++) {
		min_n[i] = INT_MAX;//将每行最大值初始化为最小 
		count_min_n[i] = 0;
	}
	for (j = 0; j < n; j++) {
		max_m[j] = INT_MIN;//将每列最小值初始化为最大 
		count_max_m[j] = 0;
	}
	
	//读取矩阵
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
			if (a[i][j] < min_n[i]) {
				min_n[i] = a[i][j];
				count_min_n[i] = 1;
			}
			else if (a[i][j] == min_n[i]) {
				count_min_n[i] = 0;//若在某一行内有重复的最值记录 
			}

			if (a[i][j] > max_m[j]) {
				max_m[j] = a[i][j];
				count_max_m[j] = 1;
			}
			else if (a[i][j] == max_m[j]) {
				count_max_m[j] = 0;
			}
		}
	} 
	
	//统计鞍点并输出 
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (a[i][j] == min_n[i] && count_min_n[i] == 1 && a[i][j] == max_m[j] && count_max_m[j] == 1){
				printf("%d %d %d", i+1, j+1, a[i][j]);
				count=1;				
			}
		}
	}
	
	if (count==0)
		printf("NIE");

	return 0;
}
