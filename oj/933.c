#include<stdio.h>

int main(void){
	int l,r;
	int i,temp,sum=0;
	
	scanf("%d %d",&l,&r);
	
	for (i=l;i<=r;i++){
		temp=i;
		while(temp>0){
			if (temp%10==2)
				sum++;
			temp=temp/10;
		}
	}
	
	printf("%d",sum);

	return 0;
}
