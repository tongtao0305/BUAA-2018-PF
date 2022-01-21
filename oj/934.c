#include<stdio.h>

int main(void){
	int num[101],i,n; 
	
	num[1]=1;
	num[2]=1;		
	num[3]=1;	
	num[4]=1;	
	num[5]=2;	
	num[6]=3;	
	
	for (i=7;i<=100;i++){
		num[i]=(num[i-1]+num[i-4])%10000007;
	}
	
	scanf("%d",&n);
	
	printf("%d",num[n]);
	
	
	return 0;
}
