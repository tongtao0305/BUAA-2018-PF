#include<stdio.h>

int main(void) {
	long long int n,i,temp1=1,temp2=1;
	
	scanf("%lld", &n);
	
	for (i = 1; i <= n; i++) {
		temp1 = i * temp1;
		if (temp1 > 1007) {
			temp1 = temp1%1007;
		}
	}
	
	printf("%lld", (temp1 % 1007));
	
	return 0;
}