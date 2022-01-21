#include<stdio.h>
int main(void) {
	long long int temp,n,i,j,min=1000000,max=0,result=0;

	scanf("%lld", &n);

	for (i = 1; i <= n; i++) {
		scanf("%lld", &temp);
		if (result < temp - min)
			result = temp - min;
		if ((i >= 2)&&(min > temp))  
			min = temp;
	}
	
	printf("%lld", result);
	
	return 0;
}