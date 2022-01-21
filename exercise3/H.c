#include<stdio.h>

int main(void) {
	int n, temp ,i, j,count=0,max=0,next=0;
	int a[1001]; 

	scanf("%d", &n);

	for (i = 0; i <= 1000; i++) {
		a[i] = 0;//初始化
	}

	for (i = 1; i <= n; i++) {
		scanf("%d", &temp);
		a[temp]++;//记录数据
		if (a[temp] > max)
			max = a[temp];
	}

	while (n>0) {
		for (i = 0; i <= 1000; i++) {
			if (a[i] == max) {
				printf("%d %d\n", i, a[i]);
				n = n - a[i];
			}
			if ((a[i] < max) && (a[i] > next))
				next = a[i];
		}
		max = next;
		next = 0;
	}

	return 0;
}