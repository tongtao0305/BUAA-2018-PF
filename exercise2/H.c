#include<stdio.h>

int main(void) {
	int n, m;//���ܶ�ȡ������������Ԫ�ظ���
	int i, j, sum = 0, temp = 0, count = 0, count2 = 0,count3=0;
	char c=' ';		//�����������
	int result[1001];//����ͳһ���
	
	scanf("%d", &n);//��ȡ��������
	
	for (i = 0; i < 1001; i++) {
		result[i] = 0;//�����ʼ��
	}

	for (i = 1; i <= n; i++) {
		scanf("%d %d", &m,&sum);//�ȶ�ȡԪ�ظ����Լ���һ������

		for (j = 1; j <= (m - 1) / 2; j++) {
			getchar();//��ȡ�ո�
			c = getchar();//��ȡ����
			scanf("%d", &temp);//��ȡ����
			if (c == '+')
				sum = sum + temp;//+
			if (c == '-')
				sum = sum - temp;//-
			if ((sum < 0)||(temp<0)) {//��������˸���count3=1��¼
				count3=1;
			}
		}
		if (count3 == 1) {
			result[i] = 1;
			count++;
			count3 = 0;
		}
		getchar();
	}
	
	printf("%d\n", count);//���һ���м������ݲ��ϸ�

	for (i = 1; i < 1001; i++) {//������ٵ���ʽ���
		if (result[i] == 1) {
			printf("%d", i);
			count2++;
			if (count2 < count) {
			printf("\n");
			}
		}
	}

	return 0;
}
