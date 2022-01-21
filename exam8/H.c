#include<stdio.h>
typedef long long LL;
long long int min(long long int a,long long int b){
	return a<b?a:b;
}

long long int js(int n);

int main(void){
	int n,t;
	
	scanf("%d",&t);
	
	while(t--){
		scanf("%d",&n);
		printf("%lld\n",js(n));
	}
	
	return 0;
} 

long long int js(int n){
	if (n==0)
		return 0;
	long long int ret=10000000000000000LL;
	int i;
	for (i=0;i<n;i++){
		ret=min(ret,js(i)*2+(1LL<<(n-i))-1);
		return ret;
	}
	
}
