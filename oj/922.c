#include<stdio.h>

int main(void){
	
	int n,i,j,k;
	
	scanf("%d",&n);
	
	while(n>1){
		for (i=2;i<=n;i++){
			if (n%i==0){
				printf("%d ",i);
				n=n/i;
				break;
			}
		}
	}
	
	return 0;
}
