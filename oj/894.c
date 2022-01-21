#include<stdio.h>

int main(void){
	
	long long int l,r,i,x,count,max=0;
	
	scanf("%lld %lld",&l,&r);
	
	if (l==r)
		x=l;
	else{	
		for (i=2;i<=10;i++){
			
			if (l%i<=r&i)
				count=(r-l)/i;
			else
				count=(r-l)/i+1;
			
			if (count>max){
				max=count;
				x=i;
			}
		}
	}
	
	printf("%d",x);
	
	return 0;
}
