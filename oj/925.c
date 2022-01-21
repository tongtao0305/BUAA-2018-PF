#include<stdio.h>

int main(void){
	int n,count=0;
	int i,j,k;
	int a[1000];
	
	scanf("%d",&n);
	
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for (i=0;i<n-2;i++){
		if (a[i]<a[i+1]&&a[i+1]>a[i+2]){
			printf("%d %d %d\n",a[i],a[i+1],a[i+2]);
			count++;
		}
	}
	
	if (count==0)
		printf("tan90");
	
	return 0;
} 
