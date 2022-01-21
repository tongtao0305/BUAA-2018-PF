#include<stdio.h>
#include<stdlib.h>
int a[10001];
int b[10001];
int c[10001];
int main(void) {
	int n,m,k,l,r,mid;
	int i, j, count=0, temp=0, sum;

	while (scanf("%d %d %d", &n, &m, &k) != EOF) {

		for (i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		for (i = 0; i < m; i++) {
			scanf("%d", &b[i]);
		}

		for (i = 0; i < k; i++) {
			scanf("%d", &c[i]);
			count = 0;
			temp = 0;
			sum = 0;

			//查找A中的名次,A为递增数列
			l = 0; r = n - 1;
			while (l < r) {
				if (a[(l + r) / 2] == c[i]) {
					l = (l + r) / 2;
					temp = 1;
					break;
				}
				else if (a[(l + r) / 2] > c[i])
					r = (l + r) / 2 - 1;
				else
					l = (l + r) / 2 + 1;
			}
			if (a[l] == c[i] || a[r] == c[i])
				temp = 1;
			if (a[l] == a[l + 1])
				l++;
			sum += n - (l+1) ;
			printf("在经过A组排序后l=%d，在该同学之前有%d人，temp=%d\n",l,sum,temp);

			//查找B中的名次
			l = 0; r = m - 1;
			while (l < r) {
				if (b[(l + r) / 2] == c[i]) {
					l = (l + r) / 2;
					temp = 1;
					break;
				}
				if (b[(l + r) / 2] < c[i])
					r = (l + r) / 2 - 1;
				else
					l = (l + r) / 2 + 1;
			}
			if (b[l] == c[i] || b[r] == c[i])
				temp = 1;
			if (b[l] == b[l - 1])
				l--;
			sum += l;
			printf("在经过B组排序后l=%d，在该同学之前有%d人，temp=%d\n", l, sum,temp);

			if (temp == 1)
				c[i] = sum+2;
			else
				c[i] = -1;
		}

		for (i = 0; i < k; i++) {
			printf("%d ", c[i]);
		}
	}

	return 0;
}
