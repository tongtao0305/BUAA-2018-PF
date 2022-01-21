#include<stdio.h>

int main(void){
	long long int m,n,num_n=0,num_m=0;
	
	scanf("%lld %lld",&m,&n);
	
	while(n>0){
		num_n=num_n*10+n%10;
		n=n/10;
	}
	while(m>0){
		num_m=num_m*10+m%10;
		m=m/10;
	}
	
	printf("%lld",num_n*num_m);
	
	return 0;
}
