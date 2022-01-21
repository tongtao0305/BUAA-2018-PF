#include<stdio.h>

int main(void){
	long long int n,num=0;
	
	scanf("%lld",&n);
	
	while(n>0){
		num=num*10+n%10;
		n=n/10;
	}
	
	printf("%lld",num);
	
	return 0;
}
