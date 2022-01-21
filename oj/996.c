#include<stdio.h>

int main(void){
	int n,q,target;
	int i,j,k,l,r;
	int a[100005];
	int b[100005]; 
	scanf("%d %d",&n,&q);
	
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for (i=0;i<q;i++){
		l=0;r=n-1;
		scanf("%d",&target);
		while(l<=r){
			if (a[(r+l)/2]<target)
				l=(r+l)/2+1;
			else if (a[(r+l)/2]>target)
				r=(r+l)/2-1;
			else if (a[(r+l)/2]==target){
				l=(r+l)/2;
				r=l;
				break;
			}
			//printf("%d %d\n",l,r);
		}
		if (l==r)
			b[i]=l+1;
		else
			b[i]=-1;
	}
	
	for (i=0;i<q;i++){
		if (b[i]==-1)
			printf("tan90\n");
		else
			printf("%d\n",b[i]);
	}
	
	return 0;
} 
