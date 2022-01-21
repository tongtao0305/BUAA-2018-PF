#include<stdio.h>

int main(void) {
	int n;
	int i,j,k,count=1,temp;
	int point[2] = { 0,0 };
	
	while (~scanf("%d", &n)) {
		for (i = 1; i <= n; i++) {
			scanf("%d", &temp);
			point[i % 2] += temp;
		}
		if (point[0] > point[1]) {
			printf("(%d,1)\n", count);
			count++;
		}
		else {
			printf("(%d,1)\n", count);
			count++;
		}

		point[0] = 0;
		point[1] = 0;
	}
	
	return 0;
}