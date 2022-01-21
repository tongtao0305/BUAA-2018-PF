#include<stdio.h>

int main(void){
	int a[5],b[5],tmp,count=0;
	
	scanf("%d %d",&a[1],&b[1]);
	scanf("%d %d",&a[2],&b[2]);
	scanf("%d %d",&a[3],&b[3]);
	
	if(a[1]*b[1]<a[2]*b[2])
		tmp=a[1],a[1]=a[2],a[2]=tmp,tmp=b[1],b[1]=b[2],b[2]=tmp;
	
	if(a[1]*b[1]<a[3]*b[3])
		tmp=a[1],a[1]=a[3],a[3]=tmp,tmp=b[1],b[1]=b[3],b[3]=tmp;
	
	if (a[1]>=a[2]+a[3]&&b[1]>=b[2]&&b[1]>=b[3])
		count=1;
	
	if (a[1]>=a[2]+b[3]&&b[1]>=b[2]&&b[1]>=a[3])
		count=1;
	
	if (a[1]>=b[2]+a[3]&&b[1]>=a[2]&&b[1]>=b[3])
		count=1;

	if (a[1]>=b[2]+b[3]&&b[1]>=a[2]&&b[1]>=a[3])
		count=1;	
	
	if (b[1]>=a[2]+a[3]&&a[1]>=b[2]&&a[1]>=b[3])
		count=1;
	
	if (b[1]>=a[2]+b[3]&&a[1]>=b[2]&&a[1]>=a[3])
		count=1;
	
	if (b[1]>=b[2]+a[3]&&a[1]>=a[2]&&a[1]>=b[3])
		count=1;

	if (b[1]>=b[2]+b[3]&&a[1]>=a[2]&&a[1]>=a[3])
		count=1;	
	
	if (count==1)
		printf("SIXSIXSIX!");
	else
		printf("GG!");
	
	
	return 0;
} 
