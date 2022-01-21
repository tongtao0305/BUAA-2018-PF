#include<stdio.h>

int main(void){
	int t,mod;
	int i,j,k;
	long long int result=1,number;
	
	scanf("%d",&t);
	
	while(t--){
		scanf("%lld",&number);
		mod=number%2;
		result=1;

		for (i=1;i<=number;i++){
			if (i%2==mod){
				result=(result*i)%(10000007);
			}
		}
		
		printf("%lld\n",result);
	}
	
	return 0;
}
