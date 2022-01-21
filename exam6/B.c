#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int n,x;
	int i, j, k;
	double sum=0,temp=1;
	char format[32];

	scanf("%d", &x);
	
	for (i = 1; i <= 33; i++) {
		temp = temp / i;
		sum = sum + temp;
	}
	
	sprintf(format, "%%.%dlf\n", x); 
	printf(format, sum);

	return 0;
}