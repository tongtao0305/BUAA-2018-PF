#include<stdio.h>

int main(void){
	int n;
	int i,j,k,temp;
	int x[1000],y[1000];
	
	scanf("%d",&n);
	
	for (i=0;i<n;i++){
		scanf("%d %d",&x[i],&y[i]);
	}
	
	for (i=0;i<n;i++){
		for (j=n-1;j>i;j--){
			if (x[j]<x[j-1]||(x[j]==x[j-1]&&y[j]>y[j-1])){
				temp=x[j];
				x[j]=x[j-1];
				x[j-1]=temp;
				temp=y[j];
				y[j]=y[j-1];
				y[j-1]=temp;
			}
		}
	}
	
	for (i=n-1;i>=0;i--){
		printf("%d %d\n",x[i],y[i]);
	}
	
	return 0;
}
