#include<stdio.h>

int main(void) {
	int n;
	int i;
	int a[10001][5];
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		scanf("%d %d %d %d %d", &a[i][0], &a[i][1], &a[i][2], &a[i][3], &a[i][4]);
	}
	
	for (i = 1; i <= n; i++) {
		printf("%+010d %+010d %+010d %+010d %+010d\n", a[i][4], a[i][3], a[i][2], a[i][1], a[i][0]);
	}

	return 0;
}

