#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void){
	int t,n,temp,i,j,k,min,minnum;
	
	scanf("%d",&t);
	
	while(t--){
		min=100000;
		minnum=100000;
		scanf("%d",&n);
		for (i=1;i<=n;i++){
			scanf("%d",&temp);
			if (abs(temp-233)<min){
				min=abs(temp-233);
				minnum=temp;
			}
			if (abs(temp-233)==min&&temp<minnum){
				minnum=temp;
			}
		}
		printf("%d\n",minnum);
	}
	
	return 0;
}
