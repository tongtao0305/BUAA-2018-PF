#include<stdio.h>
#include<math.h>

int main(void) {
	int m,i;
	double x, sum=1;//sum=1ֱ��������һ�����ݣ���ֹ�������Ϊ0
	double now = 1.0;

	scanf("%lf %d", &x, &m);

	for (i = 1; i <= m;i++) {
		now = now * x*x;
		now = now / ((2 * i -1) * (2 * i));

		if (i % 2 == 1)
			sum = sum - now;
		else
			sum = sum + now;
	}

	printf("%.6lf", sum);

	return 0;
}

