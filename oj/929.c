#include<stdio.h>

int count;

int main(void){
	int t,n,i,count[40];
	scanf("%d",&t);
	count[1]=1;
	count[2]=2;
	count[3]=4;
	for (i=4;i<40;i++){
		count[i]=count[i-1]+count[i-2]+count[i-3];
	}
	while(t--){
		scanf("%d",&n);
		printf("%d\n",count[n]);
	}
	
	return 0;
}

