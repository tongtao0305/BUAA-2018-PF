#include<stdio.h> 
#include<stdlib.h>
int f(int number);
int main()
{
	int a[5] = { 0};
	int b[4];//记录前三个人的成绩
	int c[16] = {0};
	int q, i, j, k, temp;
	scanf("%d", &q);

	for (i = 1; i <= 4; i++) {
		for (j = 0; j < q; j++) {
			scanf("%d", &temp);
			if (temp == 1)
				a[i] = a[i] + (1 << j);
		}
		if (i < 4)
			scanf("%d", &b[i]);
	}

	for (i = 0; i < (1 << q); i++)//遍历所有的可能标准答案        
		if (q-f(i^a[1]) == b[1] / 10)
			if (q-f(i^a[2]) == b[2] / 10)
				if (q-f(i^a[3]) == b[3] / 10)
				{
					c[q - f(i^a[4])] = 1;
				}

	for (i = 0; i <= 15; i++)
		if (c[i] == 1)
			printf("%d ", i * 10);

	return 0;
}

int f(int number)
{
	int count = 0;
	while (number)
	{
		number = number & (number - 1);
		count++;
	}
	return count;
}
