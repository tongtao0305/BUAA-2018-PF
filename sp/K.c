#include<stdio.h>

int ch1[1000001] = {0}, ch2[1000001] = { 0 };

int main(void) {

	long long int n, m,i,top=0;
	long long int temp=0,sum=0,result=0;
	
	scanf("%lld %lld", &n, &m);
	
	for (i = 1; i <= n; i++) {
		scanf("%lld", &temp);
		sum = sum + temp;
		ch1[sum] = 1;
	}
	
	top = sum;
	temp = 0;
	sum = 0;

	for (i = 1; i <= m; i++) {
		scanf("%lld", &temp);
		sum = sum + temp;
		ch2[sum] = 1;
	}
	
	for (i = 1; i <= top; i++) {
		if ((ch1[i] == 1) && (ch2[i] == 1))
			result ++;
	}
	
	printf("%lld", result);

	return 0;
}