#include<stdio.h>

int main(void) {
	int a[8];
	int b[8][2];
	int i, j, k,temp,count=0,max=0,sum=0,isprime=0;

	for (i = 1; i <= 7; i++) {
		scanf("%d", &a[i]);
		sum = sum + a[i];
	}
	
	for (i = 1; i <= 7; i++) {
		for (j = 7; j > i; j--) {
			if (a[j] < a[j-1]) {
				temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
	
	printf("%.2lf %.2lf\n", (double)sum / 7.0, (double)a[4]);
	
	b[1][0] = a[1];
	b[1][1] = 1;
	max = 1;
	count = 1;

	for (i = 2; i <= 7; i++) {
		for (j = 1; j < i; j++) {
			if (a[i] == b[j][0]) {
				//如果这个数字出现过
				isprime = 1;
				b[j][1]++;
				if (b[j][1] > max)
					max = b[j][1];
				break;
			}
		}
		if (isprime == 0) {
			//如果这个数字没有出现过
			count++;
			b[count][0] = a[i];
			b[count][1] = 1;
		}
		isprime = 0;
	}
		
	for (i = 1; i <= count; i++) {
		if (b[i][1] == max)
			printf("%.2lf ", (double)b[i][0]);
	}
	
	return 0;
}