#include<stdio.h>

int result[100001] = {1};

int main(void) {
	int n, st, T,last,now,count=1;
	int i, j, k;
	scanf("%d %d %d", &n, &st, &T);
	
	for (i = 1; i <= n; i++)
		result[i] = 1;

	result[st] = 0;
	last = st;

	for (i = 2; i <= T; i++) {
		now = last + i;
		while (now > n)
			now = now - n;
		if (result[now] == 1)
			count++;
		result[now] = 0;
		last = now;
	}
	
	if (n == count)
		printf("have a pokemon");
	else {
		printf("%d\n", n - count);
		for (i = 1; i <= n; i++) {
			if (result[i] == 1) {
				printf("%d ", i);
			}
		}
	}
	
	return 0;
}