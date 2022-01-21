#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int a[305][305];//������� 
int min_n[305];//ÿ�е����ֵ 
int count_min_n[305];//�ж��Ƿ�Ϊÿ�е�һ�����ֵ 
int max_m[305];//ÿ�е���Сֵ 
int count_max_m[305];//�ж��Ƿ�Ϊÿ�е�һ����Сֵ 

int main(void) {
	int n,i, j, k,count=0;

	//��ȡ�����������
	scanf("%d", &n);
	
	//ÿ��ÿ����ֵ��ʼ��
	for (i = 0; i < n; i++) {
		min_n[i] = INT_MAX;//��ÿ�����ֵ��ʼ��Ϊ��С 
		count_min_n[i] = 0;
	}
	for (j = 0; j < n; j++) {
		max_m[j] = INT_MIN;//��ÿ����Сֵ��ʼ��Ϊ��� 
		count_max_m[j] = 0;
	}
	
	//��ȡ����
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
			if (a[i][j] < min_n[i]) {
				min_n[i] = a[i][j];
				count_min_n[i] = 1;
			}
			else if (a[i][j] == min_n[i]) {
				count_min_n[i] = 0;//����ĳһ�������ظ�����ֵ��¼ 
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
	
	//ͳ�ư��㲢��� 
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
