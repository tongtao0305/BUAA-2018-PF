#include<stdio.h>
#include<math.h>
int count[10000005];

int main(void){
	int n,i,j,k,temp,result=0;
	
	scanf("%d",&n);	
	
	for (i=0;i<=10000000;i++)
		count[i]=1;
	
	for (i=2;i<=sqrt(n);i++){
		temp=2;
		while(i*temp<=n){
			count[i*temp]=0;
			temp++;
		}
	}
	
	for (i=1;i<=n;i++){
		result+=count[i];
	}
	
	printf("%d",result-1);
	
	return 0;
}
