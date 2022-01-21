#include<stdio.h>

int main(void){
	int t,n,i,j,k,count;
	int a[1000];
	
	scanf("%d",&t);
	
	while(t--){
		count=0;
		scanf("%d",&n);
		for (i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		
		for (i=1;i<n;i++){
			for (j=0;j<i;j++){
				if (a[j]>a[i]){
					count++;
				}
			}
		}
		
		printf("%d\n",count);
	}
	
	return 0;
}
