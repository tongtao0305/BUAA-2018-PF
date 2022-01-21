#include<stdio.h>

int num[12][12];
int calculator(int);

int main(void){
	int n,i,j,k;

	//读取行列式 	
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			scanf("%d",&num[i][j]);
		}
	}
	
	
	return 0;
}

int calculator(int n){
	
}
