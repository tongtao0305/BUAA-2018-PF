#include<stdio.h>

int main(void){
	int t,number,sum;
	
	scanf("%d",&t);
	
	while(t--){
		sum=0;
		scanf("%d",&number);
		while(number>0){
			sum=sum+number%10;
			number=number/10;
		}
		printf("%d\n",sum);
	}
	
	return 0;
} 
