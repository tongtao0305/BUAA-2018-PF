#include<stdio.h>

int main(void){
	int count[11];
	int i,j,k,temp=1,check=1;
	
	for (i=0;i<=10;i++){
		count[i]=1;
	}
	
	for (i=1;i<=1000;i++){
		count[temp]=0;
		temp=(temp+i+1)%10;
		if (temp==0)
			temp=10;
	}
	
	for (i=1;i<=10;i++){
		if (count[i]==1){
			printf("%d ",i);
			check=0;
		}
	}
	
	if (check==1)
		printf("NIE");
	
	return 0;
}
