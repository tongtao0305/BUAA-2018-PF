#include<stdio.h>

int check[10000000]={0};
void calculator(int,int);

int main(void){
	int n,k,i;
	
	scanf("%d %d",&n,&k);
	calculator(2*n,k);
	calculator(3*n+1,k);
	
	for (i=0;i<10000000;i++)
		if (check[i]==1)
			printf("%d ",i);

	return 0;
}

void calculator(int n,int k){
	if (k==0)
		return;
	
	check[n]=1;
	calculator(2*n,k-1);
	calculator(3*n+1,k-1);
	
}
