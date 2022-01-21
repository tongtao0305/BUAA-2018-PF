#include<stdio.h>
#include<stdint.h>
#define mod 10000000000ll
int main(void){

	int64_t t,n,sum,i;

	scanf("%lld",&t);
	while(t--){
		sum=1;
		scanf("%lld",&n);
		
		int cnt2=0,cnt5=0;
		
		for(i = 1; i <= n; ++ i){
			int x = i;
			while(!(x & 1)) ++ cnt2, x >>= 1;
			while(!(x % 5)) ++ cnt5, x /= 5;
			sum = sum * x % mod;
		}

		for(i = cnt5; i < cnt2; ++ i) sum = sum * 2 % 10000000000ll;
		
		printf("%010lld\n",sum);
	}
	return 0;
}
