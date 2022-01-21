#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int dectobin(int n);

int main(void) {
	int n,i,j,jz,ws,x;
	int **result;
	char str[10000];
	
	scanf("%d", &n);

	result = (int **)malloc(sizeof(int *) * n);
	for (i = 0; i < n; i++)
		result[i] = (int *)malloc(sizeof(int) * 2);//动态分配一个二维数组

	for (i = 0; i < n; i++) {
		for (j = 0; j <= 1; j++) 
			result[i][j] = 0;//数组初始化
	}

	for (i = 0; i < n; i++) {
		scanf("%d", &jz);
		if (jz == 10) {//如果为十进制
			scanf("%d", &x);
			result[i][0] = x;
			result[i][1] = 1;
		}
		else  {//如果为2、8、16进制
			scanf("%d", &ws);
			scanf("%s", str);
			for (j = 0; j < ws; j++) {
				if ((str[j]<=57)&&(str[j]>=48))
					result[i][0] = result[i][0] + (str[j] - '0')*((int)pow((double)jz,(double) ws - j-1));
				else
					result[i][0] = result[i][0] +(str[j] - 'A'+10)*((int)pow((double)jz, (double)ws - j - 1));
			}
		}
	}

	for (i = 0; i < n; i++) {
		if (result[i][1]) {
			dectobin(result[i][0]);
			printf(" %o %X\n",result[i][0], result[i][0]);
		}
		else
			printf("%d\n", result[i][0]);
	}

	return 0;
}

int dectobin(int n) {
	//子函数将十进制转化为二进制
	int result = 0, k = 1, i, temp,count=1;
	int number[100001];
	temp = n;
	
	while (temp) {
		
		number[count]= temp % 2;
		count++;
		temp = temp / 2;
	}

	for (i = count - 1; i >= 1; i--) {
		printf("%d", number[i]);
	}
	return 0;
}
