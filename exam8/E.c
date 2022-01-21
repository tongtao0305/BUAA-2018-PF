#include<stdio.h>

int number[1000001];
int result[1000001];

int main(void){
	int n,m,l,r;
	int i,j,k,temp=0;
	scanf("%d %d",&n,&m);
	
	result[0]=0;
	
	for (i=1;i<=n;i++)
		scanf("%d",&number[i]);
	
	for (i=1;i<=n;i++){
		temp=temp+number[i];
		result[i]=temp;
	}
	
	while(m--){
		scanf("%d %d",&l,&r);
		printf("%d\n",result[r]-result[l-1]);
	}
	
	return 0;
}
