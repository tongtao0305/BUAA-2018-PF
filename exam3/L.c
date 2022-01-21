#include<stdio.h>

int main(void) {
	int n,i;
	double temp1, temp2,sum=0,sum2=0;
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		scanf("%lf %lf", &temp1,&temp2);
		if (temp2 >= 60) {
			sum = sum + temp1 * (4 - 3 * (100 - temp2)*(100 - temp2) / 1600);
		}
		sum2 = sum2 + temp1;
	}
	
	printf("%.7lf", sum/sum2);
	
	
	return 0;
}