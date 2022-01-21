#include<stdio.h>

int main(void){
	int n,i;
	int number[50];
	scanf("%d",&n);
	
	number[1]=1;
	number[2]=1;
	number[3]=2;
	number[4]=3;
	number[5]=5;
	number[6]=8;
	number[7]=13;
	number[8]=20;
	for (i=9;i<=49;i++)
		number[i]=number[i-1]+number[i-2]-number[i-7];
	
	printf("%d",number[n]);
	
	return 0;
}


