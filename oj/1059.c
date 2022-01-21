#include<stdio.h>
void f(int);
int n, m, num[10], count[10];
int main(void) {
	scanf("%d %d", &n, &m);
	f(m);
	return 0;
}

void f(int left) {
	int i, j, k;

	if (left == 0) {
		for (i = 1; i <= m; i++)
			printf("%d ", num[i]);
		printf("\n");
		return;
	}

	for (i = 1; i <= n; i++) {
		if (count[i] != 0)
			continue;
		num[m - left + 1] = i;
		count[i] = 1;
		f(left - 1);
		count[i] = 0;
	}
	return;
}
