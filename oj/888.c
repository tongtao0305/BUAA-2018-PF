#include<stdio.h>

int main(void){
	
	int m,n,j,t;
	
	scanf("%d %d",&m,&n);
	
	if (2*m<=n&&n<=4*m&&n%2==0){
		t=n/2-m;
		j=m-t;
		printf("%d %d",j,t);
	}
	else{
		printf("Wrong number");
	}
	
	return 0;
}
