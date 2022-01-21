#include<stdio.h>
#include<string.h>
int num[25][2000],count[25];

int main(void){
	int t,n,i,j,k;
	
	//初始化 
	num[0][1]=1;
	count[0]=1;
	num[1][1]=1;
	num[1][2]=1;
	count[1]=1;

	for (i=2;i<=20;i++){
		num[i][1]=1;
		num[i][2]=num[i-1][1];
		count[i]=1;
		for (j=2;j<=2*count[i-1];j++){
			//如果与一位数字相等 
			if (num[i-1][j]==num[i-1][j-1]){
				num[i][count[i]*2-1]++;
			}
			else{
				count[i]++;
				num[i][count[i]*2-1]=1;
				num[i][count[i]*2]=num[i-1][j];
			}
		}
	}
	
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		if (n==0){
			printf("1\n");
			continue;
		}
		for (i=1;i<=count[n]*2;i++){
			printf("%d",num[n][i]);
		}
		printf("\n");
	}
	return 0;
} 


