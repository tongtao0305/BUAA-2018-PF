#include<stdio.h>

int main(void) {
	int n, m;//接受读取的数据组数和元素个数
	int i, j, sum = 0, temp = 0, count = 0, count2 = 0,count3=0;
	char c=' ';		//用来保存符号
	int result[1001];//用来统一输出
	
	scanf("%d", &n);//读取数据组数
	
	for (i = 0; i < 1001; i++) {
		result[i] = 0;//数组初始化
	}

	for (i = 1; i <= n; i++) {
		scanf("%d %d", &m,&sum);//先读取元素个数以及第一个数字

		for (j = 1; j <= (m - 1) / 2; j++) {
			getchar();//读取空格
			c = getchar();//读取符号
			scanf("%d", &temp);//读取数字
			if (c == '+')
				sum = sum + temp;//+
			if (c == '-')
				sum = sum - temp;//-
			if ((sum < 0)||(temp<0)) {//如果出现了负数count3=1记录
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
	
	printf("%d\n", count);//输出一共有几组数据不合格

	for (i = 1; i < 1001; i++) {//输出超纲的算式题号
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
