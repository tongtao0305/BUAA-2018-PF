#include<stdio.h> 
#include<stdlib.h> 
int cmp(const void *a,const void *b) 
{ 
	return(*(int *)a-*(int *)b); 
} 
int main() 
{ 
	int * a;
	int n,j,i,z,max=0,count=0,r=0,c; 
	int S; 
	scanf("%d",&n); 
	a = (int*)malloc(sizeof(int)*n);
	for(i=0;i<=n-1;i++)
	{ 
		scanf("%d",&a[i]); 
	} 
	qsort(a,n,sizeof(int),cmp); 
	for(z=n-1;z>=0;z--)
	{ 
		if(a[z]+n-z>max)
		{ 
			max=a[z]+n-z; 
			c=a[z]; 
		} 
	} 
	for(j=0;j<=n-1;j++)
	{ 
		S=a[j]+n; 
		if((a[j]>=c&&S>=max-1)||(a[j]<c&&S>=max))
			count++; 
	} 

	printf("%d",count); 
	free(a);
	return 0; 
}