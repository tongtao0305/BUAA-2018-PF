#include<stdio.h>

int countBits(long long int n) {
    int count = 0;
    while(n != 0) {
        n = n & (n-1);
        count++;
    }
    return count;
}

int is_twon(long long int n){
	if (((n)&(n-1))==0)
		return 1;
	else
		return 0;
}

int main(void){
	int t;
	long long int n;
	
	scanf("%d",&t);
	
	while(t--){
		scanf("%lld",&n);
		if (is_twon(n)==1){
			printf("222\n");
		}
		else{
			printf("%d\n",countBits(n));
		}
	}

	return 0;
}
