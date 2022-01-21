#include<stdio.h>
int gcd(int a,int b)
{
    return (b>0)?gcd(b,a%b):a;
}

int main(void){
	int n,gy_max,i,j,count=0;
	long long int a[1000];
	
	scanf("%d",&n);
	
	for (i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	
	for (i=2;i<a[0];i++){
		count=0;
		for (j=0;j<n;j++){
			if (a[j]%i==0){
				count++;
			}
		}
		if (count==n){
			break;
		}
	}
	
	for (j=0;j<n;j++)
		a[j]=a[j]/i;
		
	gy_max=gcd(a[0],a[1]);
	for (i=2;i<n;i++){
		gy_max=gcd(gy_max,a[i]);
	}
	
	printf("%d",gy_max);
	return 0;
}

