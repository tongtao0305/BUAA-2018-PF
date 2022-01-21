#include<stdio.h>

int main(void){
	int t,i,j,k,count,check;
	int num[100];
	long long int x;
	
	scanf("%d",&t);
	
	while(t--){
		for (i=0;i<100;i++)
			num[i]=0;
		count=0;
		check=0;
		scanf("%lld",&x);
		
		//特别注意0的情况 
		if (x==0){
			printf("0\n");
			continue;			
		}
		
		while(x>0){
			num[count]=x%2;
			count++;
			x=x/2;
		}
		for (i=count;i>=0;i--){
			if (num[i]==1&&check==0)
				check=1;
			if (check==1)
				printf("%d",num[i]);			
		}

		printf("\n");
	}
	
	return 0;
}


