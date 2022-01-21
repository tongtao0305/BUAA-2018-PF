#include<stdio.h>

int main(void) {
	int n,i,j,k,count=0,count2=0,count3=0;
	int *a;

	scanf("%d", &n);
	a = (int*)malloc((n+1) * sizeof(int));

	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	
	while (count < 66666) {
		for (i = 1; i <= n; i++) {
			if (a[i] % 2 == 0) {
				count2 = 1;
				break;
			}
		}

		if (count2 == 0) {
			//如果全部都是奇数
			for (i = 1; i <= n; i++) {
				a[i]=a[i] * 3 + 1;
			}
		}
		else {
			//如果有偶数
			for (i = 1; i <= n; i++) {
				if (a[i] % 2 == 0)
					a[i] = a[i] / 2;
				else
					a[i] = a[i] / 2 + 1;
			}
		}

		for (i = 1; i <= n; i++) {
			printf("%d ", a[i]);
		}
		printf("\n");
		
		for (i = 1; i <= n; i++) {
			if (a[i] == 1) {
				count3++;
			}
		}
		if (count3 == n)
			break;

		count++;
		count2 = 0;
		count3 = 0;
	}
	
	return 0;
}