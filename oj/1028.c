#include<stdio.h>

int main(void){
	int len,n,i,j,k;
	int num[25];
	
	scanf("%d",&len);
	
	for (i=1;i<=len;i++){
		scanf("%d",&num[i]);
	}
	
	scanf("%d",&n);
	
	while(n--){
		num[0]=num[len];
		for (i=len;i>=1;i--){
			num[i]=num[i-1];
		}
	}
	
	for (i=1;i<=len;i++)
		printf("%d ",num[i]);
	
	return 0;
} 
