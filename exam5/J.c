#include<stdio.h>

int min(int a, int b) {
	return a < b ? a: b;
}

int main(void) {
	int m, n, p, q;
	int sum=0,temp,count=0;
	int i, j, k;

	scanf("%d %d %d %d", &n, &m, &p, &q);

	temp = 2 * (m + n - 2);
	for (i = 1; i <= min(min(p - 1, q - 1), min(m - q, n - p)); i++) {
		//计算外围全部走过的 
		count = min(min(p - 1, q - 1), min(m - q, n - p));
		sum = sum + temp;
		temp = temp - 8;
	}

	if (p == count + 1&&q>count&&q<=m-count)
		sum = sum + q - count;
	else if (q == m - count&&p>count&&p<=n-count)
		sum = sum + (m - 2 * count-1) + (p - count);
	else if (p == n - count && q > count&&q <= m - count)
		sum = sum + (m + n - 4 * count-2) + (m - q - count+1);
	else if(q=count+1&&p > count&&p <= n - count)
		sum = sum + (2 * m + n - 6 * count-3) + (n - p - count+1);

		printf("%d\n", sum);
	
	return 0;
}