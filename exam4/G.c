#include<stdio.h>
#include<math.h>

int main(void) {
	int n,temp=0,count=0;
	int i=2, j, k;
	
	scanf("%d", &n);
	k = n;
	while (k--) {
		j = k;
		while ((temp < n)&&(j<n)) {
			temp = temp + j;
			j++;
		}
		if (temp == n) {
			count = 1;
			printf("%d = %d", n, k);
			for (i = k + 1; i <= j-1; i++) {
				printf(" + %d",i);
			}
			break;
		}
		temp = 0;
	}
	
	if (count == 0)
		printf("-1");

	return 0;
}