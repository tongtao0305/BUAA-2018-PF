#include<stdio.h>

int main(void){
	int count[25];	
	int n,i,count_oushu=0;
	long long int temp1=1,temp2=1;
	
	for (i=0;i<=24;i++){
		count[i]=i/5;
	}
	
	scanf("%d",&n);
	
	for (i=0;i<=n;i++){
		if (count[i]%2==0)
			count_oushu++;
	}
	
	printf("%d",count_oushu);
	
	return 0;
}
