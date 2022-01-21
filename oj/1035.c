#include<stdio.h>

int main(void) {
	int count[105];
	int n, s, m, i, j, k, now, temp;

	scanf("%d %d %d", &n, &s, &m);
	now = s;

	for (i = 1; i <= n; i++)
		count[i] = 1;

	for (i = 1; i <= n; i++) {
		temp = m;
		while (temp > 0) {
			if (temp == 1 && count[now] == 1) {
				count[now] = 0;
				break;
			}
			if (count[now] == 1) {
				temp--;

			}
			now++;
			if (now > n)
				now = 1;
		}
		printf("%d\n", now);
	}

	return 0;
}
