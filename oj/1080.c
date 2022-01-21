#include<stdio.h>
#include<stdlib.h>
int main(void){
	int t,n,i,j,k,l,r;
	int num[205];
	long long int min,temp;
	scanf("%d",&t);
	while(t--){
		l=100000;
		r=-100000;
		scanf("%d",&n);
		for (i=1;i<=n;i++){
			scanf("%d",&num[i]);
			if (num[i]>r)
				r=num[i];
			if (num[i]<l)
				l=num[i];
		}
		min=10000000000;
		for (i=l;i<=r;i++){
			temp=0;
			for (j=1;j<=n;j++)
				temp=temp+abs(num[j]-i);
			if (temp<min)
				min=temp;
		}
		printf("%lld\n",min);
	}
	return 0;
}
