#include<stdio.h>

int main(void){
	int n,m,temp,l,r;
	int i,j,k,count=0;
	int a[1005],b[1005];
	
	for (i=0;i<1005;i++){
		a[i]=0;b[i]=0;
	}
	
	//Êý¾ÝÊäÈë 
	scanf("%d %d",&n,&m);
	for (i=0;i<n;i++){
		scanf("%d",&temp);
		a[temp]=1;		
	}

	for (i=0;i<m;i++){
		scanf("%d",&temp);
		b[temp]=1;		
	}
	
	for (i=1;i<=1000;i++){
		if (a[i]==1&&b[i]==1){
			printf("%d ",i);
			count=1;		
		}
	}
	if (count==0)
		printf("Intersection set empty!");
	
	return 0;
}
