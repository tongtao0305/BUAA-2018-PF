#include<stdio.h>

int main(void){
	int n,sum;
	int i,j=1,k=1;
	
	scanf("%d",&n);
	
	for (i=1;i<=n;i++){
		if (j>k){
			j=1;
			k++;
		}
		j=j+1;
		sum=sum+k;		
	}
	
	printf("%d",sum);
	
	return 0;
}
