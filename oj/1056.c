#include<stdio.h>

int num[105][105];

int main(void){
	int t,n,i,j,k,count=1;
	
	for (i=1;i<=100;i++){
		if (i%2==1){
			for (j=1;j<=i;j++){
				k=i-j+1;
				num[j][k]=count;
				count++;
			}			
		}
		else{
			for (j=i;j>=1;j--){
				k=i-j+1;
				num[j][k]=count;
				count++;
			}	
		}
	}

	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for (i=n;i>=1;i--){
			for (j=1;j<=i;j++)
				printf("%d ",num[n-i+1][j]);
			printf("\n");
		}
	}
	
	return 0;
}
