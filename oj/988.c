#include<stdio.h>

int main(void){
	
	int n,i,j,k;
	int num[1005];
	
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
		scanf("%d",&num[i]);
	
	for (i=0;i<n;i++){
		for (j=n-1;j>i;j--){
			if (num[j]>num[i]){
				int temp=num[j];
				num[j]=num[i];
				num[i]=temp;
			}
		}
	}
	
	for (i=0;i<n;i++)
		printf("%d ",num[i]);
	
	return 0;
}
