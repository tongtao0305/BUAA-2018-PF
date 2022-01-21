#include<stdio.h>
#include<math.h>
int main(void){
	long long int s,c=1000000000000,a,b;
	long long int i,j,k;

	scanf("%lld",&s);
	
	for (i=1;i<=sqrt(s)+1;i++){
		a=i;
		b=s/i;
		if (a*b!=s)
			continue;
		
		if (2*(a+b)<c)
			c=2*(a+b);
	
	}
	
	printf("%lld",c);		
		
	return 0;
}
