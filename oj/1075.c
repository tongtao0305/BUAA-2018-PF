#include<stdio.h>

int main(void){
	int t,n,i,j,k;
	long long int num[10005],sum=0,temp=1;
	
	for (i=0;i<=10000;i++)
		num[i]=0;
	
	for (i=1;i<=10000;i++){
		temp=(temp*i)%1000000007;
		sum=(sum+temp)%1000000007;
		num[i]=sum;
	}
	
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%lld\n",num[n]);
	}
	
	return 0;
}
