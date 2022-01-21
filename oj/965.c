#include<stdio.h>
#include<math.h>
int main(void){
	int m,n,p,q;
	int i,j,k;
	int result=1;
	
	scanf("%d %d %d %d",&m,&n,&p,&q);
	
	if (q>n)
		result=0;
	else{
		result=m;
		
		for (i=n;i>=n-q+1;i--){
			result=result*i;
		}
		
		result=result*pow(p,n-q);
	}
	
	printf("%d",result);
	
	return 0;
}
